#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	string ad = " ABC", br = " BABC", go = " CCAABB";
	vector<int> count = {0,0,0};

	int t;
	cin >> t;

	string str;
	cin >> str;
		
	auto strIter = str.begin();
	
	auto adIter = ad.begin()+1;
	auto brIter = br.begin()+1;

	for(auto goIter = go.begin()+1; strIter != str.end(); goIter++,strIter++,adIter++,brIter++){
		
		if(*strIter == *adIter)
			count[0]++;
		if(*strIter == *brIter)
			count[1]++;
		if(*strIter == *goIter)
			count[2]++;

		if(adIter == ad.end()-1)
			adIter = ad.begin();
		if(brIter == br.end()-1)
			brIter = br.begin();
		if(goIter == go.end()-1)
			goIter = go.begin();

	}

	int temp = 0;

	for(auto c : count){
		if(c > temp)
			temp = c;
	}

	cout << temp << endl;

	if(count[0] == temp){
		cout << "Adrian" << endl;
	}
	if(count[1] == temp){
		cout << "Bruno" << endl;
	}
	if(count[2] == temp){
		cout << "Goran" << endl;
	}
	
	return 0;
}
