#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	int target;

	cin >> target;

	int side = 2;

	for(int i=1; ; i++){		
		if(target == 0){
			cout << 4 << endl;
			break;
		}

		side += (side-1);
		if(target == i){
			cout << fixed << (int)pow(side,2) << endl;
			break;
		}
	}
	return 0;
}
