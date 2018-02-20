#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t-->0){
		string message;
		getline(cin, message);
		for(auto& c: message){
			if (isalpha(c)){
				c = char(toupper(c));
					
			}
		}
		cout << message << endl;

	}
	
	return 0;
}
