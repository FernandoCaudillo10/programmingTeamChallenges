#include <iostream>
#include <unordered_set> 
#include <string>
#include <vector>

using namespace std;

int main(){

	unordered_set<string> s;	

	int test;
	cin >> test;

	vector<vector<string>> uniName(test);

	for(auto &i : uniName){
		string uni, name;
		cin >> uni >> name;

		i.push_back(uni);
		i.push_back(name);

	}
	
	vector<string> first12;
	
	int setI = 0;
	while(s.size() != 12){
		
		auto in = s.insert(uniName[setI][0]);
		setI++;
		
		if(in.second){
			first12.push_back(*in.first);
		}

	}
	
	for(auto iter : first12){
		for(auto i : uniName){
			if(i[0] == iter){
				cout << i[0] << " " << i[1] << endl;
				break;
			}
		}
	}


	return 0;
}
