#include <iostream>

using namespace std;

int main(){
	
	string str;
	cin >> str;
	int count =0;
	for(int i=0; i<str.size(); i++){
		if(i%3 == 0 && str[i] != 'P')
			count++;
		else if(i%3 == 2 && str[i] != 'R')
			count++;
		else if(i%3 == 1 && str[i] != 'E')
			count++;
	}

	cout << count;

	return 0;
}
