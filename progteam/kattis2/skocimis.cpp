#include <iostream>
#include <vector>

using namespace std;

int main(){

	int a, b, c;
	cin >> a >> b >> c;
	vector<bool> kangarooHere(c+1, false);
	
	kangarooHere[a] = true;
	kangarooHere[b] = true;
	kangarooHere[c] = true;
	
	int lastPlace = a;
	int max = 0;
	
	for(int i=a; i<kangarooHere.size(); i++){
		
		if(kangarooHere[i] == true){
			int between = (i-lastPlace)-1;
			lastPlace = i;

			if(between > max){
				max = between;
			}

		}

	}

	cout << max << endl;
	
	return 0;
}
