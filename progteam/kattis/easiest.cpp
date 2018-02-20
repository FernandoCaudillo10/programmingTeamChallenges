#include <iostream>
#include <string>

using namespace std;

int sumDigits(int num){

	string str = to_string(num);
	int sum=0;
	for(auto i : str){
		sum += i - '0';
	}

	return sum;
}

int main(){

	while(true){

		int num;
		cin >> num;
		if(num == 0)
			break;

		int sum = sumDigits(num);

		for(int i=11; i<= 100000; i++){
			if(sumDigits(num * i) == sum){
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}
