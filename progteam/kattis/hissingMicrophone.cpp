#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string hiss;
	bool isHiss = false;
	cin >> hiss;
	for(int i=0;i<hiss.size()-1;i++){
		if(hiss[i] == 's' && hiss[i+1] == 's'){
			cout << "hiss" << endl;
			isHiss = true;
			break;
		}
	}
	if(!isHiss){
		cout << "no hiss" << endl;
	}

	return 0;
}
