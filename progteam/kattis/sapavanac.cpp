#include <iostream>

using namespace std;

int main(){
	int hour, min;
	cin >> hour >> min;
	
	min -= 45;
	
	if(min < 0){
		hour--;
		min = 60 + min;
	}
	if(hour < 0)
		hour = 24 + hour;
	
	cout << hour << " " << min;
	return 0;
}
