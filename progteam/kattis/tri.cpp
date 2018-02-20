#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<double> eq(3);
	
	cin >> eq[0] >> eq[1] >> eq[2];

	if (eq[0] + eq[1] == eq[2]) cout << eq[0] << "+" << eq[1] << "=" << eq[2];
	else if (eq[0] - eq[1] == eq[2]) cout << eq[0] << "-" << eq[1] << "=" << eq[2];
	else if (eq[0] / eq[1] == eq[2]) cout << eq[0] << "/" << eq[1] << "=" << eq[2];
	else if (eq[0] * eq[1] == eq[2]) cout << eq[0] << "*" << eq[1] << "=" << eq[2];
	
	else if (eq[1] + eq[2] == eq[0]) cout << eq[0] << "=" << eq[1] << "+" << eq[2];
	else if (eq[1] - eq[2] == eq[0]) cout << eq[0] << "=" << eq[1] << "-" << eq[2];
	else if (eq[1] / eq[2] == eq[0]) cout << eq[0] << "=" << eq[1] << "/" << eq[2];
	else if (eq[1] * eq[2] == eq[0]) cout << eq[0] << "=" << eq[1] << "*" << eq[2];

	return 0;
}
