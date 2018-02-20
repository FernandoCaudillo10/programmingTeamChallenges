#include <iostream>
#include <math.h>

using namespace std;

int main(){

	double theta, h;
	cin >> h >> theta;
	cout << ceil(h / sin(theta * (M_PI / 180))) << endl;

	return 0;
}
