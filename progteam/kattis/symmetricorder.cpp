#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int count = 0;

	while(true){
		int t;
		cin >> t;

		if(t == 0)
			break;
		
		count ++;
		cout << "Set " << count << endl;

		vector<string> vecStr;
		
		int c = 0;
		while(t-->0){
			string str;
			cin >> str;
			
			vecStr.push_back(str);
			if(c % 2 == 0){
				cout << str << endl;
			}
			c++;
		}

		for(int i=((vecStr.size() % 2 == 0) ? vecStr.size()-1 :  vecStr.size()-2); i>=0; i-=2){
			cout << vecStr[i] << endl;
		}

	}

	return 0;
}
