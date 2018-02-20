#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

	vector<string> graph = { ".....",".....","..x..","....."};
	
	int arr[3][2] = {{1,2},{3,4},{5,6}};

	for(int i=0; i<graph.size(); i++){
		for(int j=0; j<graph[i].size(); j++){
			cout << graph[i][j];
		}
		cout << endl;
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}

	cout << graph[0].back() << endl;

	return 0;
}
