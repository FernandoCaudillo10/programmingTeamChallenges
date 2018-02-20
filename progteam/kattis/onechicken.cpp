#include <iostream>

using namespace std;

int main(){

	int n, m;

	cin >> n >> m;

	if(n > m)
		cout << "Dr. Chaz needs " << n-m << " more " << ( (n-m) == 1 ? "piece" : "pieces" ) << " of chicken!" << endl;
	else
		cout << "Dr. Chaz will have " << m-n << ( (m-n) == 1 ? " piece" : " pieces" ) << " of chicken left over!" << endl;
	
	return 0;
}	
