#include <iostream>

using namespace std;

int main(){
	int k, q, r, b, kn, p;
	cin >> k >> q >> r >> b >> kn >> p;
	
	if(k<1){
		cout << 1 << " ";
	}
	else{
		cout << 0-(k - 1) << " ";
	}
	if(q<1){
		cout << 1 << " ";
	}
	else{
		cout << 0-(q-1) << " ";
	}
	if(r<2){
		cout << 2-r << " ";
	}
	else{
		cout << 0-(r-2) << " ";
	}
	if(b<2){
		cout << 2-b << " ";
	}
	else{
		cout << 0-(b-2) << " ";
	}	
	if(kn<2){
		cout << 2-kn << " ";
	}
	else{
		cout << 0-(kn-2) << " ";
	}
	
	if(p<8){
		cout << 8-p << " ";
	}
	else{
		cout << 0-(p-8) << " ";
	}

	return 0;
}
