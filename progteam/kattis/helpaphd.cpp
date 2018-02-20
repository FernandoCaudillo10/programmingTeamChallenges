#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	
	int t;
	cin >> t;

	while(t-->0){
		string str;
		cin >> str;
		if(str == "P=NP")
			cout << "skipped" << endl;
		else{
		
			for(int i=0; i<str.size(); i++){

				if(str[i] == '+' && i != 0){
					cout << ((str.substr(0,i).size() != 1) ? stoi(str.substr(0,i)) : str[i-1]-'0')  + 
						 ((str.substr(i+1,str.size()-1).size() != 1) ?  stoi(str.substr(i+1, str.size()-i)) : str[i+1]-'0') << endl;
					break;
				}
			}

		}

	}

	return 0;
}
