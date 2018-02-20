#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isSum(int num, int x){
	
	string sNum = to_string(num);
	int total = 0;
	
	for(auto c : sNum){
		total += c - '0';
	}

	if(total == x){
		return true;
	}

	return false;
}

int main(){
	
	int l,d,x;
	cin >> l >> d >> x;
	vector<int> sumToX;
	
	for(int i=l; i<=d; i++){
		if(isSum(i,x))
			sumToX.push_back(i);	
	}

	cout << sumToX[0] << endl << sumToX[sumToX.size()-1] << endl;

	return 0;
}
