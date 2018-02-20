#include <iostream>

using namespace std;

int main(){

	int arr[5] = {4,2,6,4,8};

	for(int i=0; i<5-1; i++){

		int min = i;

		for(int j=i+1; j < 5; j++){
			if(arr[j] < arr[min])
				min = j;
		}

		swap(arr[i], arr[min]);

	}

	for(auto elem : arr)
		cout << elem << " ";
	cout << endl;

	return 0;
}
