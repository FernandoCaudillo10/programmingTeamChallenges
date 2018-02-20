#include <iostream>

using namespace std;

int main(){

	int started, questions;
	cin >> started >> questions;
	int count=0, time=0;

	while(questions-->0){

		int t;
		cin >> t;
		time += t;

		if(time > 210){
			break;
		}

		char q;
		cin >> q;

		if(q == 'T'){
			count++;
		}

	}

	cout << ((started + count) % 8 == 0 ? 8 : (started + count) % 8) << endl;

	return 0;
}
