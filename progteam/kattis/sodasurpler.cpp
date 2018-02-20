#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int empty, found, cost;

	cin >> empty >> found >> cost;
	
	int temp = empty + found, ans=0;

	while(temp / cost != 0){
		
		ans += temp / cost;
		ans += temp % cost;

		temp /= cost;
	}

	cout << ans;

	return 0;
}
