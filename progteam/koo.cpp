#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	while(true){
		
		int players;
		string cards;
		string cards2;
		string searching;

		cin >> players;
		if(players == 0)
			break;

		cin.ignore();
		getline(cin, cards);
		getline(cin, cards2);
		getline(cin, searching);
		cards2.insert(0, " ");
		cards += cards2;
		cards.insert(0, " ");
		
		vector<int> count = {0,0,0,0,0,0};

		for(int i=0; i < cards.length(); i++){
			if(cards[i] == ' '){
				if (cards[i+4] == 'p')
					count[0]++;

				if (cards[i+4] == 'm')
					count[1]++;
				if (cards[i+4] == 'e')
					count[2]++;
				if (cards[i+4] == 'g')
					count[3]++;
				if (cards[i+4] == 'l')
					count[4]++;
				if (cards[i+4] == 'r')
					count[5]++;
			}
		}
		//cout << cards << endl;
		//cout << searching << endl;	
		//for(auto i: count)
		//	cout << i;
		//cout << endl;
		
		if (searching[3] == 'p' && count[0] > 2){
			cout << "lie"<< endl;
		}
		else if (searching[3] == 'm' && count[1] > 2){
			cout << "lie" << endl;
		}
		else if (searching[3] == 'e' && count[2]> 2){
			cout << "lie" << endl;
		}
		else if (searching[3] == 'g'&& count[3] > 2){
			cout << "lie" << endl;
		}
		else if (searching[3] == 'l' && count[4]>2){
			cout << "lie" << endl;
		}
		else{
			cout << "maybe truth" << endl;
		}
		



	}
	
	return 0;
}
