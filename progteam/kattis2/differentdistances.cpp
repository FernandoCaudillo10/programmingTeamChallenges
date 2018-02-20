#include <iostream>
#include <math.h>

using namespace std;

int main(){

	double x1, y1, x2, y2, p;

	while(true){
		
		cin >> x1;
		if(x1 == 0)
			break;
		cin >> y1 >> x2 >> y2 >> p;

		cout.setf(ios::showpoint);
		cout.setf(ios::fixed);
		cout.precision(10);

		cout << pow( pow( ((x1-x2 < 0) ? (x1-x2)*(-1): (x1-x2)) , p) + pow( ((y1-y2 < 0) ? (y1-y2)*(-1): (y1-y2)), p) , 1/p ) << endl;

	}

	return 0;
}
