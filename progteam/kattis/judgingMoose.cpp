#include <iostream>

using namespace std;

int main(){
	
	int l, r;
	
	cin >> l >> r;

	if(l == 0 && r == 0){
		cout << "Not a moose " << endl;
	}
	else if(l == r){
		cout << "Even " << r * 2;	
	}
	else if(l < r){
		cout << "Odd " << r * 2;
	}
	else if (l > r){
		cout << "Odd " << l * 2;
	}

	return 0;
}	
