#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool islarger(string s1, string s2){

	int min= s1.size();
	if(s2.size() > min)
		min = s2.size();
	for(int i=0; i<min; i++){
		
		if(s1[i] > s2[i]){
		
			return true;
		}
		else
			return false;

	}

	return false;

}

void orderSongs(vector<vector<string>> songs, int att){
	

	for(int i=0; i<songs.size()-1; i++){
		
		
		for(int j=0; j< songs.size()-1-i ; j++){
			if(islarger(songs[j][att], songs[j+1][att])){
				
				vector<string> temp(songs[j+1]);
				songs[j+1] = songs[j];
				songs[j] = temp;

			}
		}
	}

	
	for(auto v : songs){
		for(auto s: v){
			cout << s << " ";
		}
		cout << endl;
	}
}

int main(){
	//store attributes
	string order;

	getline(cin, order);

	stringstream ss(order);
	
	vector<string> attributes;

	while(ss >> order){
		attributes.push_back(order);
	}
	//store songs
	int num;
	cin >> num;

	vector<vector<string>> songs(num);

	for(auto & v : songs){
		for(int i=0; i<attributes.size(); i++){
			string temp;
			cin >> temp;
			v.push_back(temp);
		}
	}

	//Sort songs by attributes

	int commands;
	cin >> commands;
	
	while(commands-->0){
		
		string att;
		cin >> att;
		
		for(int i=0; i<attributes.size(); i++){
			if(attributes[i] == att){
				for(auto s: attributes){
					cout << s << " ";
				}
				cout << endl;
				orderSongs(songs, i);
			}
		}
		if(commands == 0)
			continue;
		cout << endl;
	}

	return 0;
}
