#include <iostream>

using namespace std;

int main(){
	int base2[9] = {256, 128, 64, 32, 16, 8, 4, 2, 1};
	while(true){
		int n; 
		cin >> n;
		if(n==0)
			break;
		//----------------
		int count = 0;
		for(int i= 0; i<9; i++){
			while(base2[i] < n){
				n -= base2[i];
				count ++;
			}
		}
		cout << count << endl;
	
	}

	return 0;
}
