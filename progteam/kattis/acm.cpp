#include <iostream>
#include <string>

using namespace std;

int main(){

	bool done[26] = { false };
	int points[26] = { 0 };
	int total = 0;

	while(true){
	
		int time;
		char problem;
		string correct;

		cin >> time;
		if(time == -1)
			break;
		cin >> problem;
		cin >> correct;

		if(correct == "right"){
			points[problem - 'A'] += time;
			if(done[problem -'A'] == false){
				done[problem - 'A'] = true;
				total += points[problem - 'A'];
			}
		}
		else{
			points[problem - 'A'] += 20;
		}
	}

	int totalSolved=0;
	for(auto d : done){
		if(d)
			totalSolved++;
	}

	cout << totalSolved << " " << total << endl;

	return 0;
}
