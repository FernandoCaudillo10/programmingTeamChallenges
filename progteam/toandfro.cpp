#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverseEveryOther(vector<string> reversedVec){
	
	for(int i=0;i<reversedVec.size(); i++){
		if(i%2==1){
			reverse(begin(reversedVec[i]), end(reversedVec[i]));
		}
		//cout << reversedVec[i] << endl;
	}

	return reversedVec;
}

int main(){
	while(true){
		int num;
		string encoded;
		cin >> num;
		if (num == 0)
			break;
		cin >> encoded;
		//----------input

		vector<string> rowVcol;
		int rows = encoded.length() / num;
		
		for(int i=0;i<rows;i++){			
			rowVcol.push_back(encoded.substr(i*num, num));
		}
		
		rowVcol = reverseEveryOther(rowVcol);
		
		string decoded = "";
		int count = 0;
		while(count < num){
			for(auto str: rowVcol){
				decoded += str[count];
			}
			count++;
		}
		
		cout << decoded << endl;
		
	}

	return 0;
}
