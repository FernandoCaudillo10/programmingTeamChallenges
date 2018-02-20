#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

bool setTree(unordered_map<int, unordered_set<int>> &tree, string str){
	stringstream ss(str);

	int temp;
	ss >> temp;
	int key = temp;
	if(temp == -1){
		return true;
	}
	while(ss>>temp){
		tree[key].emplace(temp);
	}
	return false;
}
void findPath(unordered_map<int, unordered_set<int>> tree, int key){
	for(auto branch : tree){
		for(auto node : branch.second){
			if(node == key){
				cout << branch.first << " ";
				findPath(tree, branch.first);
			}
		}
	}
}

int main(){
	
	unordered_map<int, unordered_set<int>> tree;

	int kitten;
	cin >> kitten;
	cout << kitten << " ";
	bool quit = false;
	while(!quit){
		string temp;
		getline(cin, temp);
		quit = setTree(tree, temp);
	}
	 
	findPath(tree, kitten);
	cout << endl;
	return 0;
}
