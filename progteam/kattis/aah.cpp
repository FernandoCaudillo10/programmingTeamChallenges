#include <iostream>

using namespace std;

int main(){

	string ah, ah2;
	cin >> ah >> ah2;
	if(ah.size() < ah2.size())
		cout << "no" << endl;
	else
		cout << "go" << endl;

	return 0;
}
