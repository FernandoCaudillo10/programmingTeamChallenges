#include <iostream>

using namespace std;

int main(){

	int arr[100]={0};
	int min1, min2, min3;

	cin >> min1 >> min2 >> min3;

	int start, end;

	for(int i=0 ; i<3 ; i++){
		cin >> start >> end;
		for(int j=start; j<end; j++){
			arr[j]++;
		}
	}
	
	int total =0;
	for(auto trucks : arr){
		
		if(trucks == 1)
			total += min1 * trucks;
		else if(trucks == 2)
			total += min2 * trucks;
		else if(trucks == 3)
			total += min3 * trucks;
		
	}

	cout << total << endl;
	

	return 0;
}
