#include <iostream>
#include <string>

using namespace std;

int rotation(string str){
	
	char arr[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	int rotation = 0;
	
	for(auto &c: str){
	
		for(int i=0;i<26; i++){
			
			if(c == arr[i]){
				rotation += i;
				break;
			}

		}
	}

	return rotation;

}

string rotate(string str, int rotateBy){
	
	rotateBy %= 26;

	for(int i=0; i<str.size(); i++){
		
		if(str[i] - 'A' + rotateBy > 'Z' - 'A'){
			str[i] += rotateBy - 26;
		}
		else{
			str[i] += rotateBy;
		}

	}
	
	return str;
}

char rotate(char str, int rotateBy){
	
	rotateBy %= 26;

	if(str - 'A' + rotateBy > 'Z' - 'A'){
		str += rotateBy - 26;
	}
	else{
		str += rotateBy;
	}
	
	return str;
}

int main(){
	
	string encrypted;
	
	cin >> encrypted;

	string first = encrypted.substr(0, encrypted.size()/2);
	string second = encrypted.substr(encrypted.size()/2, encrypted.size()/2);
		
	int rot1 = rotation(first), rot2 = rotation(second);
	
	first = rotate(first,rot1);
	second = rotate(second, rot2);

	for(int i=0; i<first.size(); i++){
		first[i] = rotate(first[i],(int)second[i]-'A');
	}
		
	cout << first << endl;

	return 0;
}
