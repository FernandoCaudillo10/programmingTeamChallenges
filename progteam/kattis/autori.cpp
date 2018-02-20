#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
	
	string str;
	
	cin >>  str;
	
	for(auto c: str){
		if(isupper(c))
			cout << c;	
	}

	return 0;
}
