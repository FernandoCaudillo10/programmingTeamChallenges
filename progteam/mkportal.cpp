#include <iostream>

using namespace std;

int main(){
	
	while(true){
	int x, y;
	cin >> y >> x;
	
	if(x == 0 || y == 0)
		break;
	for(int i = 0; i< x; i++){
		if(i == 0 || i == x-1){
			for(int j= 0; j< y ; j++){
				cout << '.';
			}
		}
		else{
			for(int j= 0; j< y ; j++){
				if(j == 0 || j == y-1)
					cout << '.';
				else
					cout << ' ';
			}
		}
		cout << endl;
	}

	}

	return 0;
}
