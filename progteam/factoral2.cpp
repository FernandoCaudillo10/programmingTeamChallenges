#include <iostream>

using namespace std;

long long factoral(long long n){
	
	if(n == 0)
		return 1;
	//cout << n << " * ";

	return n * factoral(n-1);
}


int main(){
	int tc;
	cin >> tc;
	while(tc-->0){
		long long t;
		cin >> t;
		t = factoral(t);
		cout << t << endl;
	}
		
	return 0;
}
