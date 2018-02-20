#include <iostream>

using namespace std;

int main(){
	
	int t;

	cin >> t;

	while(t-->0){
		string str, str1, fin="";
		cin >> str >> str1;
		for(int i=0; i< str.size(); i++){
			if(str[i] == str1[i])
				fin += '.';
			else
				fin += '*';
		}
		
		cout << str << endl << str1 << endl << fin << endl << endl;
	}

	return 0;
}
