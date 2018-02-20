#include <iostream>

using namespace std;

int main(){
	
	char number[8]= {'A','K','Q','J','T','9','8','7'};
	int domVal[8] = {11,4,3,20,10,14,0,0},
		notDomVal[8] = {11,4,3,2,10,0,0,0};

	int hands;
	char dom;
	
	cin >> hands >> dom;
	hands *= 4;
	
	int total = 0;

	while(hands-->0){
		string card;

		cin >> card;
		
		for(int i=0; i<8; i++){
			if(number[i] == card[0] && card[1] == dom){
				total += domVal[i];
			}
			else if(number[i] == card[0] && card[1] != dom){
				total += notDomVal[i];
			}
			
		}
		
	}
	
	cout << total << endl;

	return 0;
}
