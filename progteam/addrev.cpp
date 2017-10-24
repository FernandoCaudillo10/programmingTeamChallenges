#include <iostream>
#include <string>

using namespace std;

int reverse(string num){
	string revNum;
	for(int i=num.size()-1; i>=0; i--){
		revNum += num[i];
	}
	return stoi(revNum);
}

int main(){
	int tcc; cin >> tcc;
	while(tcc--){
		string num1, num2;
		cin >> num1 >> num2;
		
		int result = reverse(num1) + reverse(num2);

		cout << reverse(to_string(result)) << endl;
		
	}
	return 0;
}
