#include <iostream>

using namespace std;

int main(){
	double cost, total=0;
	int l;
	cin >> cost >> l;

	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(7);

	while(l-->0){
		double a,b;

		cin >> a >> b;

		total += a * b;

	}

	cout << total * cost << endl;

	return 0;
}
