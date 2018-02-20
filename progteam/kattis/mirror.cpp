#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	int t, count = 0;
	cin >> t;

	while(t-->0){
		count++;
		int c, r;
		cin >> c >> r;
		
		vector<string> graph;

		for(int i=0 ; i<c; i++){
			string temp;
			cin >> temp;
			graph.push_back(temp);
		}
		cout << "Test " << count << endl;
		for(int i=graph.size()-1; i >= 0; i--){
			for(int j = graph[i].size()-1; j >= 0; j--){
				cout << graph[i][j];
			}
			cout << endl;
		}


	}
	

	return 0;
}
