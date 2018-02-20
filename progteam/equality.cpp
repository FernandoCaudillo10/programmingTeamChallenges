#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int num1, num2, total;
	char ar, eq;
	
	cin >> num1 >> ar >> num2 >> eq >> total;

	if(num1 + num2 == total){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

	return 0;
}
