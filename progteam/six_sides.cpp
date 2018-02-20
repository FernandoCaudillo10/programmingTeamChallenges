#include <iostream>

using namespace std;

int main(){
	int* p1 = new int[6];
	int* p2 = new int[6];
	for (int i = 0; i < 6; i++) {
		int n;
		cin >> n;
		p1[i] = n;
	}
	for (int i = 0; i < 6; i++) {
		int n;
		cin >> n;
		p2[i] = n;
	}
	
	float  p1_pos = 0;
	float  p2_pos = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (p1[i] > p2[j]) {
				p1_pos++;
			}
			if (p2[i] > p1[j]) {
				p2_pos++;
			}
		}
	} 
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(5);
	//cout << fixed << setprecision(5);
	if ((p1_pos + p2_pos) == 0) {
		cout << "0.00000" << endl;
	} else {
		cout << ((p1_pos) / (p1_pos + p2_pos)) << endl;
	}	
	
	return 0;
}
