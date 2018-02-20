#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int r, c;
	cin >> r >> c;

	vector<string> graph(r);
	int arrCount[5] = {0};

	for(auto &col : graph){
		cin >> col;
	}

	for(int i=0; i<graph.size()-1; i++){
		for(int j=0; j<graph[i].length()-1; j++){
			if(graph[i][j] == '#' || graph[i+1][j] == '#' || graph[i][j+1] == '#' || graph[i+1][j+1] == '#'){
				continue;
			}
			int count=0;
			if(graph[i][j] == 'X'){
				count++;
			}
			if(graph[i+1][j] == 'X'){
				count++;
			}
			if(graph[i][j+1] == 'X'){
				count++;
			}
			if(graph[i+1][j+1] == 'X'){
				count++;
			}
			arrCount[count]++;
		}
	}
	
	for(auto i : arrCount){
		cout << i << endl;
	}

	return 0;
}
