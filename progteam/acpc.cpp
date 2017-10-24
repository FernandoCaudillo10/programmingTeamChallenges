#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b, c;
	
	while(true){
		cin >> a >> b >> c;
		if(a == 0 && b==0 && c==0)
			break;
		if(abs(b) == abs(c))
			cout << "GP " << c/b << endl;
		else if(b-a==c-b)
			cout << "AP " << c + (c-b) << endl;
		else
			cout << "GP " << c * (c/b) << endl;
	}

	return 0;
}
