#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string input;
	string vow = "aeiou";
	getline(cin, input);
	
	for(int i=1; i<input.size()-1; i++){
		
		for(auto v : vow){
			if(input[i] == 'p' && input[i-1] == v && input[i+1] == v)
				input.erase(i,2);
		}
			
	}
	
	cout << input << endl;

	return 0;
}
