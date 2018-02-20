#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	vector<string> graph;
	string in;

	while(cin >> in){
		graph.push_back(in);
	}
	
	int count = 0;
	bool hasK = false;

	for(int i=0; i<graph.size(); i++){
		for(int j=0; j<graph[i].size(); j++){
			if(i-1 >= 0 && j-2 >= 0){
				if(graph[j-2][i-1] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}
			if(i-2 >= 0 && j-1 >= 0){

				if(graph[j-1][i-2] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}
			if(i-2 >=0 && j+1 < graph[i].size()){
				
				if(graph[j+1][i-2] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}
			if(j+2 < graph[i].size() && i-1 >=0){

				if(graph[j+2][i-1] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}
			
			if(i+1 < graph.size() && j+2 < graph[i].size()){
				
				if(graph[j+2][i+1] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}
			if(i+2 < graph.size() && j+1 < graph[i].size()){

				if(graph[j+1][i+2] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}
			if(i+2 < graph.size() && j-1 >= 0){
				
				if(graph[j-1][i+2] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}
			if(j-2 >= 0 && i+1 < graph.size()){

				if(graph[j-2][i+1] == 'k' && graph[j][i] == 'k'){
					cout << "invalid" << endl;
					hasK = true;
					break;
				}
			}

			if(graph[j][i] == 'k'){
				count++;
			}

		}
		if(hasK){
			break;
		}
	}
		
	if(hasK);
		
	else if(count == 9)
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;

	return 0;
}
