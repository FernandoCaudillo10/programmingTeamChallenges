#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int k, m;
	while (cin >> k >> m) {
		if (k == 0) break;
		unordered_set<string> S;
		while (k--) {
			string s;
			cin >> s;
			S.insert(s);
		}
		bool f = true;
		while (m--) {
			int c, r;
			int count = 0;
			cin >> c >> r;
			while (c--) {
				string s;
				cin >> s;
				if (S.find(s) != S.end()) {
					++count;
				}
			}
			if (count < r) f = false;
		}
		cout << (f ? "yes" : "no") << endl;
	}
	return 0;
}
