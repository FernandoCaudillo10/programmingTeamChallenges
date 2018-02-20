#include <iostream>

using namespace std;

int main(){
	
	int t, avg=0, tc=0;
	cin >> t;
	while(t-->0){
		int num;
		cin >> num;
		if(num == -1){
			continue;
		}
		avg += num;
		tc++;
	}
	cout << avg/(double)tc;
	return 0;
}
