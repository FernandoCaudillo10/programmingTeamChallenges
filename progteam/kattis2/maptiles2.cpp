#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int main(){

	string quad;
	cin >> quad;

	int endX = pow(2,quad.length()), endY = pow(2,quad.length());
	int startX=0, startY=0;

	for(auto c : quad){

		if(c == '0'){
			endX -= (endX - startX) / 2;
			endY -= (endY - startY) / 2;
		}
		else if(c == '1'){
			endY -= (endY - startY) / 2;
			startX += (endX - startX) / 2;
		}
		else if(c == '2'){
			endX -= (endX - startX) / 2;
			startY += (endY - startY) / 2;
		}
		else if(c == '3'){
			startY += (endY - startY) / 2;	
			startX += (endX - startX) / 2;
		}

	}

	cout << quad.length() << " " << startX << " " << startY << endl;	
	return 0;
}
