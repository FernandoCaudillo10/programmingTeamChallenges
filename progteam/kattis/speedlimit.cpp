#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main(){
	
	while(true){
		
		int tc;
		cin >> tc;

		if(tc == -1){
			break;
		}

		vector<pair<int,int>> table;

		for(int i=0; i<tc; i++){
			int miles, hours;
			cin >> miles >> hours;
			table.push_back(make_pair(miles, hours));
		}
		
		int total = table[0].first * table[0].second;
		pair<int,int> min1 = table[0];

		for(auto p: table){
			
			total += (p.second - min1.second) * p.first;
			
			min1 = p;

			//cout << p.first << " "  << p.second << endl;
		}

		cout << total << " miles" << endl;
	
	}

	return 0;
}
