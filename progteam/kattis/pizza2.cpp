#include <iostream>
#include <math.h>

using namespace std;

int main(){

	double R, C;

	cin >> R >> C;

	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(6);

	double wassabi = (( ((R-C < 0)?(R-C)*(-1):R-C) * 2 * M_PI) / (R * 2 * M_PI))*100; 
	cout << wassabi * (wassabi / 100);

	return 0;
}
