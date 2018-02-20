#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool forward(vector<string> &graph, int direction[], bool &error, const bool isEnd){
	
	for(int i=0; i<graph.size(); i++){
		for(int j=0; j<graph[i].size(); j++){
			if(graph[i][j] == 'T'){
				
				if(graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] == '.'){
					graph[i][j] = '.';
					graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] = 'T';
					break;
				}	

				else if(graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] == 'D'
						&& isEnd){
					graph[i][j] = '.';
					graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] = 'T';	
					return true;
				}
				else if(graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] == 'C'
						|| i-direction[0]+direction[2] < 0
						|| i-direction[0]+direction[2] >= 8
						|| j+direction[1]-direction[3] < 0
						|| j+direction[1]-direction[3] >= 8 ){
					error = true;
					break;
				}
			}
		}
	}
	return false;

}

void laser(vector<string> &graph, int direction[], bool &error){
	
	for(int i=0; i<graph.size(); i++){
		for(int j=0; j<graph[i].size(); j++){
			if(graph[i][j] == 'T'){
				if(graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] == 'I'){
					graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] = '.';
				}
				else if(graph[i-direction[0]+direction[2]][j+direction[1]-direction[3]] != 'I'){
					error = true;
				}

			}
		}
	}

}

int main(){

	vector<string> graph;
	string temp, instructions;

	while(cin >> temp){
		graph.push_back(temp);
	}

	instructions = graph[graph.size()-1];
	graph.pop_back();

	int direction[4] = {0,1,0,0};
	
	bool foundDiamond = false;
	bool error = false;

	for(auto ins : instructions){
		
		foundDiamond = false;
			
		if(ins == 'F'){
			if(ins == instructions.back())
				foundDiamond = forward(graph,direction,error, true);
			else
				foundDiamond = forward(graph,direction,error, false);
			if(foundDiamond || error)
				break;
		}
		else if(ins == 'R'){
			bool turned = false;
			for(int i=0; i<4-1; i++){
				if(direction[i]){
					direction[i] = 0;
					direction[i+1] = 1;
					turned = true;
					break;
				}
			}

			if(direction[3] && !turned){
				direction[3] = 0;
				direction[0] = 1;
			}
			
		}
		else if(ins == 'L'){
			bool turned = false;
			for(int i=1; i<4; i++){
				if(direction[i]){
					direction[i] = 0;
					direction[i-1] = 1;
					turned = true;
					break;
				}
			}
			if(direction[0] && !turned){
				direction[0] = 0;
				direction[3] = 1;
			}
		}
		else if(ins == 'X'){
			laser(graph,direction,error);
			if(error)
				break;
		}
			
	}
	
	if(foundDiamond && !error)
		cout << "Diamond!" << endl;
	else
		cout << "Bug!" << endl;
	
//	for(auto s: graph)
//		cout << s << endl;
	
	return 0;
}	
