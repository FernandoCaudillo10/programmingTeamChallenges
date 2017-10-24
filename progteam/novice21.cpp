#include <iostream>

using namespace std;

int main(){
	int testCases, a, b, n, count;
	cin >> testCases;

	for(int i=0; i<testCases; i++){
		count = 0;
		cin >> a >> b >> n;
		count = b-a;
		count = (count / n);
		
		if(b%n==0)
			count++;

		cout << count << endl;
	}
	

	return 0;
}
