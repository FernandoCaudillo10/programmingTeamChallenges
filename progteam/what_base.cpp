#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int convert(string num, int expon){

	int r = 0;
	int count = 0;

	for(int i=num.size()-1; i>=0;--i){
		int n = num[count] - '0';
		
		r += n * pow(expon, i);

		//cout << n << "* " << expon << "^" << i << endl;
		count++;
	}
		
	return r;
}
int octal(string num){
	for(auto e: num){
		if(e == '8' || e == '9')
			return 0;
	}

	return convert(num, 8);
}

int main(){
	int tcc; cin >> tcc;
	while(tcc--){	
		int c; cin >> c; cout << c;
		
		string num; cin >> num;
		
		cout << " ";
		cout << octal(num) << " ";
		cout << stoi(num) << " ";
		cout << convert(num, 16) << endl;
	
	}
	return 0;
}
