#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){

	int groups;
	cin >> groups;
	
	cin.ignore();

	while(groups-->0){
			
		int gnomes;
		cin >> gnomes;
		vector<int> group(gnomes);

		for(auto &g : group){
			cin >> g;
		}

		for(int i=1; i<group.size()-1; i++){
			if((group[i-1] == (group[i] - 1)) ){
				continue;
			}
			else{
				cout << i+1 << endl;
				break;
			}

		}

		
	}

	return 0;
}
