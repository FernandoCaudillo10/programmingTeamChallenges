#include <iostream>

using namespace std;

int main(){

	int arr[5];

	for(int i=0; i<5; i++){

		int num1, num2, num3, num4;
		cin >> num1 >> num2 >> num3 >> num4;

		arr[i] = num1 + num2 + num3 + num4;

	}

	int temp = 0;
	for(int i=0; i<5; i++){
		if(arr[i] > temp)
			temp = arr[i];
	}

	for(int i=0; i<5; i++){
		if(arr[i] == temp)
			cout << i+1 << " " << arr[i] << endl;
	}

	return 0;
}	
