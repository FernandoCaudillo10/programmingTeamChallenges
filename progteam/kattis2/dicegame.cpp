#include <iostream>
#include <math.h>

using namespace std;

int aTob(int a, int b){
	int sum=0;
	for(int i=a; i<= b; i++){
		sum += i;
	}
	return sum;
}

int main(){

	int sumG=0, sumE=0;
	int sidesG=0, sidesE=0;
	int a, b;

	cin >> a >> b;
	sidesG += b-a+1;
	sumG += aTob(a,b);

	cin >> a >> b;
	sidesG += b-a+1;
	sumG += aTob(a,b);

	cin >> a >> b;
	sidesE += b-a+1;
	sumE += aTob(a,b);

	cin >> a >> b;
	sidesE += b-a+1;
	sumE += aTob(a,b);

	if( fabs((double)sidesG/sumG - (double)sidesE/sumE ) < 0.1 ){
		cout << "Tie" << endl;
	}
	else if( (double)sidesG/sumG > (double)sidesE/sumE ){
		cout << "Gunnar" << endl;
	}
	else if((double)sidesG/sumG < (double)sidesE/sumE ){
		cout << "Emma" << endl;	
	}

	return 0;
}
