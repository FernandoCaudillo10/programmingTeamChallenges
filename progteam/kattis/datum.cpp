#include <iostream>
#include <vector>

using namespace std;

const vector<int> monthDays = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(){

	int d, m;
	
	cin >> d >> m;

	int yearDay = 0;

	int count = 1;
	for(int j=0; j<monthDays.size(); j++){
		for(int i=1; i<=monthDays[j]; i++, count++){
			if(i == d && j+1 == m)
				yearDay = count;
		}
	}

	switch(yearDay % 7){

		case 0: cout << "Wednesday" << endl;
			break;
		case 1: cout << "Thursday" << endl;
			break;
		case 2: cout << "Friday" << endl;
			break;
		case 3: cout << "Saturday" << endl;
			break;
		case 4: cout << "Sunday" << endl;
			break;
		case 5: cout << "Monday" << endl;
			break;
		case 6: cout << "Tuesday" << endl;
			break;
	}

	
	return 0;
}
