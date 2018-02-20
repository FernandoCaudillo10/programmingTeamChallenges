#include <iostream>

using namespace std;

int main(){

	string str;
	cin >> str;
	for(int i=0; i<str.size(); i++){
		if(str[i] == str[i+1])
			continue;
		else
			cout << str[i];
	}


	return 0;
}
