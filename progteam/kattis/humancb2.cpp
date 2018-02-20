#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t-->0){
		
		double vInit, theta, x, h1, h2;
		double y, time;
		cin >> vInit >> theta >> x >> h1 >> h2;
		
		theta *= 3.14 / 180;	
		time = x / (vInit * cos(theta));

		y = ( vInit * time * sin(theta) ) - ( 0.5 * 9.81 * time * time );
		
		if(y + 1 <= h2 && y - 1 >= h1){
			cout << "Safe" << endl;
		}
		else{
			cout << "Not Safe" << endl;
		}
	
	}

	return 0;
}
