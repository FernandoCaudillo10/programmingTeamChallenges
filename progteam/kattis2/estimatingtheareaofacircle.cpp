#include <iostream>
#include <math.h>

using namespace std;

int main(){

	double r;
	long int m, c;

	while(true){
		
		cin >> r >> m >> c;

		if(r == 0){
			break;
		}

		cout.setf(ios::showpoint);
		cout.setf(ios::fixed);
		cout.precision(9);

		cout << M_PI * r * r << " " << (r*2) * (r*2) * ((double)c / m) << endl;

	}

	return 0;
}
