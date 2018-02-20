#include <iostream>

using namespace std;

int main(){

	int num, count = 0, b;
	
	cin >> num;
	
	b = num-2;

	num = 0;

	while(true){
		
		
		if(num + 1 == b)
			break;
		
		count ++;

		num += 2;
		b++;
	

		if(num == b)
			break;
	}
	
	cout << count << endl;

	return 0;
}
