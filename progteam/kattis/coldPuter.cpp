#include <iostream>
using namespace std;
int main(){
	
	int t, count=0, num;
	cin >> t;
	for(int i=0; i < t; i++){
		cin >> num;
		if(num < 0){
			count++;
		}
	}
	cout << count;

	return 0;
}
