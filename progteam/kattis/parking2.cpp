#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

	int test;
	cin >> test;
	while(test-->0){
		
		int size;
		cin >> size;

		vector<int> parking(size);
		
		for(auto &p : parking){
			cin >> p;
		}
		
		sort(parking.begin(), parking.end());
		
		int lowest=100000;
		 
		for(int i=0; i<=99; i++){
			int temp;

			if(i<parking.front()){
				temp = abs(parking.back()-i) * 2;
			}
			else if(i > parking.back()){
				temp = abs(parking.front()-i) * 2;
			}
			else{
				temp = (abs(parking.front()-i) * 2) + (abs(parking.back()-i) * 2);
			}	
			
			if(temp < lowest)
				lowest = temp;
		}

		cout << lowest << endl;
	}
	
	return 0;
}
