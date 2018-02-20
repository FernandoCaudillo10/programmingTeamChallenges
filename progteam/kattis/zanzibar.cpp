#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t-->0){
		
		vector<int> numbers;
		int num;

		while(true){
			cin >> num;
			if(num == 0)
				break;
			numbers.push_back(num);
		}

		vector<int> travelers;

		for(int i=0; i<numbers.size()-1; i++){
			if((numbers[i] * 2) < numbers[i+1]){
				travelers.push_back(numbers[i+1] - pow(2,i+1));
			}
		}
		
		int total;
		
		if(travelers.empty()){
			total = 0;
		}
		else{
			for(vector<int>::reverse_iterator rit = travelers.rbegin(); rit != travelers.rend(); rit++){
				if(*rit == travelers[travelers.size()-1]){
					total = travelers[travelers.size()-1];
					continue;
				}

				total -= *rit;
			
			}
		}

		cout << total << endl;
	}

	return 0;
}
