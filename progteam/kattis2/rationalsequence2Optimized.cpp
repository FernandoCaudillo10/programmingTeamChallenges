#include <iostream>
#include <sstream>

using namespace std;

int main(){

	int test;
	cin >> test;
	
	while(test-->0){
		
		int number;
		cin >> number;
		cout << number;
		
		string frac;
		cin >> frac;
		long long int num, denom;
		frac.replace(frac.find('/'),1, " ");
		stringstream ss(frac);	

		ss >> num >> denom;
		
		cout << num << " / " << denom << endl;
		string lr = "";
		while(((long long)num != 1) && ((long long)denom != 1)){
			
			if(num / (double)denom > 1){
				lr += 'r';
				num = num - denom;
				cout << num << " / " << denom << endl;
			}
			else{
				lr += 'l';
				denom = denom - num;
				cout << num << " / " << denom << endl;
			}
		}
		
		long long int ans=1;
		for(auto i = lr.rbegin(); i != lr.rend(); i++){
			if(*i == 'r')
				ans = (ans * 2) + 1;
			else
				ans = ans * 2;
		}
		
		cout << " " << ans << endl;
	}

	return 0;
}
