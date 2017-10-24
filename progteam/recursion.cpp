#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_groups(vector<int> &v, int n){
	
	if (n==0){
		vector<vector<int>> result;
		vector<int> empty;
		result.push_back(empty);
		return result;
	}

	vector<vector<int>> prev_results = get_groups(v, n-1);
	vector<vector<int>> result;
	for(int i=0; i<prev_results.size(); i++){
		for(auto &elem : v){
			vector<int> temp = prev_results[i];
			temp.push_back(elem);
			result.push_back(temp);
		}
	}
	return result;
}

void print(vector<int> &v){
	bool first = true;
	cout << "[";
	for(auto &e : v){
		if (first){
			cout << e;
			first = false;
		}
		else
			cout << "," << e;
	}
	cout << "]";
}


void print(vector<vector<int>> &v){
	bool first = true;
	cout << "[";
	for(auto &e : v){
		if (!first){
			cout << ",";
		}
		print(e);
		first = false;
	}

	cout << "]";
}

int main(){
	
	vector<int> inner={1,0};
	vector<vector<int>> fin = get_groups(inner,2);	
	print(fin);

	return 0;
}
