#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

string decrypt(string message){
	int decryptNum;
	int first;
	for(int i= 0; i< message.length(); i++){
		if(isalpha(message[i])){
			first = i;
			break;
		}
	}
	if(islower(message[first]))
		decryptNum = (message[first]-'a');
	else
		decryptNum = (message[first]-'A');
	
	for(auto& c: message){
		if (isalpha(c) && islower(c)){
			if(c-decryptNum < 'a')
				c = 'z' - (decryptNum - (c -'a')) + 1; 
			else
				c -= decryptNum;
		}
		else if (isalpha(c) && isupper(c)){
			if(c-decryptNum < 'A')
				c = 'Z' - (decryptNum - (c -'A')) + 1; 
			else
				c -= decryptNum;
		}
	}
	
	return message;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t-->0){
		string message;
		getline(cin, message);
		
		cout << decrypt(message) << endl;

	}
	
	return 0;
}
