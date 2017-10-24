#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int tcc;

	cin >>tcc;
	
	while(tcc--){
		vector<int> testcase;
		for(int i=0; i<3; i++){
			int num;
			cin >> num;
			testcase.push_back(num);
		}
		
		if(testcase[0] * testcase[2] <= testcase[1])
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}

	return 0;
}
