#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<string> graph;
	string temp;

	while(cin >> temp){
		graph.push_back(temp);
	}

	for(auto & str: graph){
		if(str.length() < 7){
			str.insert(str.begin(),2,'#');
			str.insert(str.end(),2,'#');
		}
	}
	
	int counter = 0;

	for(int i=0; i < graph.size(); i++){
		
		for(int j=0; j < graph[0].length(); j++){
			
			if( i-2 >= 0){
				if(graph[i-2][j] == '.' && graph[i][j] == 'o' && graph[i-1][j] == 'o'){
					counter++;
				}
			}
			if(i+2 < graph.size()){
				if(graph[i+2][j] == '.' && graph[i][j] == 'o' && graph[i+1][j] == 'o'){
					counter++;
				}
			}
			if(j-2 >= 0){
				if(graph[i][j-2] == '.' && graph[i][j] == 'o' && graph[i][j-1] == 'o'){
					counter++;
				}
			}
			if(j+2 < graph[i].length()){
				if(graph[i][j+2] == '.' && graph[i][j] == 'o' && graph[i][j+1] == 'o'){
					counter++;
				}
			}

		}

	}

	cout << counter << endl;

	return 0;
}
