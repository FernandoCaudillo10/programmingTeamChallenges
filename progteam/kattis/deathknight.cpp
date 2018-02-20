#include <iostream>

using namespace std;

int main(){
	
	int t, total = 0;
	cin >> t;
	while(t-->0){
		string str;
		cin >> str;
		bool nogo = false;

		for(int i=0; i<str.size()-1; i++){
			if(str[i] == 'C' && str[i+1] == 'D'){
				nogo = true;
				break;
			}
		}
		if(!nogo)
			total++;
	}
	
	cout << total;

	return 0;
}
