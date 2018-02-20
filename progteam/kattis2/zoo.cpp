#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(){

	int count = 1;
	while(true){
	
		int test;
		cin >> test;

		if(test == 0){
			break;
		}

		map<string, int> unique_animals;

		cout << "List " << count << ":" << endl;
		
		cin.ignore();			
		while(test-->0){
			string line;
			getline(cin, line);
			

			stringstream ss(line);

			vector<string> animal;

			while(ss >> line){
				animal.push_back(line);
			}
				
			for(auto &c : animal[animal.size()-1]){
				 c = tolower(c);
			}

			if(unique_animals.find(animal[animal.size()-1]) == unique_animals.end()){
				unique_animals[animal[animal.size()-1]] = 1;
			}
			else{
				unique_animals[animal[animal.size()-1]]++; 
			}
		}

		for(auto it = unique_animals.begin(); it != unique_animals.end(); it++){
			cout << it->first << " | " << it->second << endl;
		}

		count++;

	}

	return 0;
}
