#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int tcc;
	
	cin >> tcc;
	while(tcc--){
		string input;
		int uniqueC[26] = {0};

		cin >> input;

		for(auto c: input){
			uniqueC[c-'a']++;
		}
		sort(uniqueC, uniqueC+26);
		int result=0;
		for(int i=0; i<24; i++){
			result += uniqueC[i];	
		}
		cout << result << endl;
	}	
		
	return 0;
}
