#include <iostream>
#include <sstream>
#include <unordered_set>
using namespace std;

typedef unordered_set hset;

bool possible(vector<string> &v, int n, hset<string> &S) {
	vector<vector<int>> t(v.size());
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 1
	}
}

bool possible(string &s, int n, hset<string> &S) {
	stringstream ss(s);
	vector<string> v;
	string token;
	while (ss >> token) {
		v.push_back(token);
	}
	return possible(v, n, S);
}

int main(){
	int s;
	cin >> s;
	hset<string> S;
	while (s--) {
		string n;
		cin >> n;
		S.insert(n);
	}
	cin.ignore();
	string a, b, c;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	cout << (possible(a, 5, S) && possible(b, 7, S) && possible(c, 5, S) ? "haiku" : "come back next year") << endl;
	return 0;
}
