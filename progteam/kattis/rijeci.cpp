#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> b = {0,1,1};
	vector<int> a = {1,0,1};
	
	int k;
	cin >> k;
	

	for(int i=3; i<=k; i++){
		
		int temp = a.back();
		a.push_back(b.back());
		b.push_back(a.back() + temp); 

	}
	
	if(k < 3)
		cout << a[k] << " " << b[k] << endl;
	else
		cout << a.back() << " " << b.back() << endl;


	return 0;
}
