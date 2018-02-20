#include <iostream>

using namespace std;

int main(){

	while(true){
		
		long int numerator, denominator, wholeNum;

		cin >> numerator >> denominator;

		if(numerator == 0 && denominator == 0)
			break;
		
		wholeNum = numerator / denominator;

		cout << wholeNum << " " << numerator - wholeNum * denominator << " / " << denominator << endl; 
		
	}
	
	return 0;
}
