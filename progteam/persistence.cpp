#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int nextNum(string num){
	int next=1;
	
	for(auto i: num){
		next *= i-'0';
	}	
		
	return next;
}

int main(){
	int tcc;
	cin >> tcc;
	while(tcc--){
		int num;
		int count=0;
		cin >> num;
			
		while(num>=10){	
			num = nextNum(to_string(num));
			count++;
		}		
		cout << count << endl;

	}

	return 0;
}
