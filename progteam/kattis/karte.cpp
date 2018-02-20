#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<bool> P, K, H, T;
	
	for(int i=0; i<13; i++){
		P.push_back(false);
		K.push_back(false);
		H.push_back(false);
		T.push_back(false);	
	}

	string str;
	bool isValid = true;
	cin >> str;

	for(int i=0; i< str.length(); i++){
		if(isalpha(str[i])){
			if(str[i] == 'P'){
				if(P[stoi(str.substr(i+1,2))-1] == true) isValid = false;
				else P[stoi(str.substr(i+1,2))-1] = true;
			}
			else if(str[i] == 'H'){
				if(H[stoi(str.substr(i+1,2))-1] == true) isValid = false;
				else H[stoi(str.substr(i+1,2))-1] = true;
			}
			else if(str[i] == 'K'){
				if(K[stoi(str.substr(i+1,2))-1] == true) isValid = false;
				else K[stoi(str.substr(i+1,2))-1] = true;
			}
			else if(str[i] == 'T'){
				if(T[stoi(str.substr(i+1,2))-1] == true) isValid = false;
				else T[stoi(str.substr(i+1,2))-1] = true;
			}
		}
	}

	if(isValid){
		int cP=0, cK=0, cH=0, cT=0;
		for(int i=0; i<13; i++){
			if(P[i] == false) cP++;
			if(K[i] == false) cK++;
			if(H[i] == false) cH++;
			if(T[i] == false) cT++;
		}

		cout << cP << " " << cK << " " << cH << " " << cT << endl;
	}

	else
		cout << "GRESKA" << endl;
	
	return 0;
}
