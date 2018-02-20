#include <iostream>
#include <set>

using namespace std;

int main(){
	
	set<int> ans;
	
	for(int i=0; i<10; i++){
		
		int num;
		cin >> num;

		ans.insert(num % 42);
			
	}

	cout << ans.size() << endl;

	return 0;
}	
