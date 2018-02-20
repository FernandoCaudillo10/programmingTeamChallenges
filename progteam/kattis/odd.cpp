#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	int num;
	cin >> num;
	for(int i=0; i<num; i++){
		int num2;
		cin >> num2;
		if (abs(num2) % 2 == 1){
			cout << num2 << " is odd" << endl;
		}
		else{
			cout << num2 << " is even" << endl;
		}
	}

	return 0;
}
