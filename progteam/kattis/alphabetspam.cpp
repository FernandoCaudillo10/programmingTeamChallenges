#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

	string str;

	cin >> str;

	double white=0, low=0, up=0, sym=0;
	for(auto c: str){
		if(c == '_'){
			white++;
		}
		else if(isalpha(c) && isupper(c)){
			up++;
		}
		else if(isalpha(c) && islower(c)){
			low++;
		}
		else{
			sym++;
		}
	}

	cout << white / str.size() << endl << low / str.size() << endl << up / str.size() << endl << sym / str.size() << endl;

	return 0;
}
