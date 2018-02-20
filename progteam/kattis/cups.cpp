#include <iostream>
#include <ctype.h>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){

	int tc;
	cin >> tc;
	
	map<string, int> m;
	vector<int> size;

	while(tc-->0){
		
		string first, second;

		cin >> first >> second;

		if(isdigit(first[0])){
			
			int temp = stoi(first) / 2;
			first = second;
			second = to_string(temp);

		}
		
		m[first] = stoi(second);
		size.push_back(stoi(second));
	}
	
	sort(size.begin(),size.end());

	for(auto i: size){
		for(auto k: m){
			if (k.second == i){
				cout << k.first << endl;
			}
			//cout << k.first << k.second << endl;
		}
	}

	return 0;
}
