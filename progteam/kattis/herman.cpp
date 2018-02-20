#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double num; 
	cin >> num;

	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(6);

	cout << M_PI * (num * num) << endl << (num * num) * 2 << endl;

	return 0;
}
