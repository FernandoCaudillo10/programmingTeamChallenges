#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Star{
	string name = "";
	int x= 0;
	int y= 0;
	double bp= 0;
	double bright= 0;
};

bool reverseAl(Star a, Star b){

	if(a.name > b.name)
		return true;
	else
		return false;
}

int main(){
	int testCases;
	int count = 0;
	while(cin >> testCases){
		count++;
		vector<Star> stars;
		for(int i=0; i<testCases; i++){
			Star test;
			cin >> test.name >> test.x >> test.y >> test.bp;
			test.bright = (test.y-test.x)*(test.y-test.x)* test.bp;
			stars.push_back(test);
		}
		sort(stars.begin(), stars.end(), reverseAl);
		cout << count << endl;
		
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		
		for(Star e: stars){
			cout << e.name << " ";
			cout << e.bright;
			//printf(" %.3f ",e.bright);
			cout << endl;
		}

	}
	
	return 0;
}
