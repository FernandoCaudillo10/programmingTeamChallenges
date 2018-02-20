#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin >> t;

	while(t-->0){
		
		int num;
		cin >> num;

		cout << ((num % 400 == 0) ? num / 400 : num / 400 + 1) << endl;

	}

	return 0;
}
