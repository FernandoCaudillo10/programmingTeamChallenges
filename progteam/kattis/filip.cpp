#include <iostream>
#include <string>

using namespace std;

void reverse(string &str){

	for(int i=0; i<str.size()-1;i++){
		
		if(i > str.size()-1-i){
			break;
		}

		char temp = str[str.size()-1-i];
		str[str.size()-1-i] = str[i];
		str[i] = temp;

	}
	
}

int main(){
	
	string a, b;

	cin >> a >> b;
	
	reverse(a);
	reverse(b);
	
	cout << ((stoi(a) > stoi(b)) ? a : b) << endl;

	return 0;
}
