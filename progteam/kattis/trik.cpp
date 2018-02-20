#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int arr[3] = {1,0,0};
	string s;

	cin >> s;
	
	for(auto c: s){
		if(c == 'A')
			swap(arr[0], arr[1]);
		else if(c == 'B')
			swap(arr[1],arr[2]);
		else
			swap(arr[0],arr[2]);
	}
	for(int i=0; i<3; i++){
		if(arr[i] == 1)
			cout << i+1;  
	}

	return 0;
}
