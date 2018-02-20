#include <iostream>

using namespace std;

void printRange(int num, int num2){

	for(int i=num+1; i<=num2+1; i++){
		cout << i << endl;
	}

}

int main(){
	
	int n, m;

	cin >> n >> m;
	
	if(n > m)
		printRange(m,n);
	else
		printRange(n,m);
	

	return 0;

}
