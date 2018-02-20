#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	int c,r, zc, zr;
	cin >> c >> r >> zc >> zr;

	vector<string> graph;

	for(int i=0; i<c; i++){
		string temp;
		cin >> temp;
		graph.push_back(temp);
	}

	for(int i=0; i<c; i++){
		string temp1;
		for(int j=0;j<r; j++){
			for(int k=0; k<zr; k++){
				temp1 += graph[i][j];
			}	
		}
		for(int k=0; k<zc; k++){
			cout << temp1 << endl; 
		}
	}

	return 0;
}
