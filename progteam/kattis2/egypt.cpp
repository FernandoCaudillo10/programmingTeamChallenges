#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int a,b,c;
	while(true){
		cin >> a >> b >> c;
		if(a == 0 && b==0 && c==0)
			break;

		vector<int> triangle = {a,b,c};
		
		sort(triangle.begin(), triangle.end());
	
		if( (triangle[0] * triangle[0]) + (triangle[1] * triangle[1]) == (triangle[2] * triangle[2]))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
		
	}


	return 0;
}
