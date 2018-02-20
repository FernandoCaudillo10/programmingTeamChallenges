#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(){
	
	long long tc, total=0;
	cin >> tc;
	while(tc--){
		string current;
		cin >> current;
		
		total += pow(stoi(current.substr(0, current.size()-1),NULL,10), current[current.size()-1]-'0');		
	}
	cout << total << endl;

	return 0;
}
