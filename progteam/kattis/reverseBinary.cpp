#include <iostream>
#include <bitset>
#include <string>

using namespace std;
int main(){
	string str = bitset<32>(13).to_string();
	string dec = bitset<32>(str).to_ulong();
	cout << dec << endl;
		
	return 0;
}
