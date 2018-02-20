#include <iostream>
#include <math.h>

using namespace std;

int main(){

	long long area;
	cin >> area;

	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(10);

	cout << sqrt(area) * 4 << endl;

	return 0;
}
