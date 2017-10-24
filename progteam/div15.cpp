#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool reverseOrder(char a, char b){ return a > b; }
int main(){
	string num, answer;	
	int testCases, sum;
	cin >> testCases;	
	for(int i=0; i< testCases; i++){
		cin >> num;
		sum = 0;
		for(int j=0; j<num.size(); j++){
			sum += num[j] - '0';
		}
		if(stoi(num)==15)
			cout << num << endl;

		else if(sum % 3==0){
			sort(num.begin(),num.end(), reverseOrder);
			if(stoi(num)%5==0)
				cout << num << endl;
			else
				cout << "Impossible" << endl;
		}
		else
			cout << "Impossible" << endl;
	}

	return 0;
}
