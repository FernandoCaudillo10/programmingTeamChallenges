#include <iostream>

using namespace std;

int main(){
	
	int tc;

	cin >> tc;

	while(tc-->0){
		int a,b,c;

		cin >> a >> b >> c;

		if(a + c < b){
			cout << "advertise" << endl;
		}
		else if(a+c > b){
			cout << "do not advertise" << endl;
		}
		else{
			cout << "does not matter" << endl;
		}

	}
		
	return 0;
}
