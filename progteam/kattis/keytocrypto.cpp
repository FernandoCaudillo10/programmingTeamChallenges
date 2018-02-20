#include <iostream>

using namespace std;

int main(){
	
	string cipher, key;
	string message;
		
	cin >> cipher >> key;
	
	bool isBigger = (key.size() > cipher.size()) ? true : false;

	for(int i=0; i<cipher.size() && i<key.size(); i++){
		
		if(cipher[i] - key[i] < 0 ){
			cipher[i] = cipher[i] - (key[i] - 'A') + 26 ;
		}
		else{
			cipher[i] -= key[i] - 'A';
		}

	}
	
	for(int i=key.size(); i<cipher.size(); i++){
		if(isBigger)
			break;
		if(cipher[i] - cipher[i-key.size()] < 0 ){
			cipher[i] = cipher[i] - (cipher[i-key.size()] - 'A') + 26 ;
		}
		else{
			cipher[i] -= cipher[i-key.size()] - 'A';
		}
	}

	cout << cipher << endl;

	return 0;
}
