#include <iostream>

using namespace std;

int main(){

	int size=4;
	int arr[size];
	bool swapped;

	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<size-1; i++){
		swapped = false;
		
		for(int j=0; j<size-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				swapped = true;
			}
		}

		if(!swapped){
			break;
		}
	}
	
	cout << arr[0] * arr[2] << endl;

	return 0;
}
