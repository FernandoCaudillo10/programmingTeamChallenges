#include <iostream>
#include <vector>
using namespace std;

bool valid(string &a, string &b, string &c) {
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == b[i] && b[i] == c[i]) continue;
		if (a[i] != b[i] && a[i] != c[i] && b[i] != c[i]) continue;
		return false;
	}
	return true;
}

int main() {
	vector<string> G(12);
	bool f = false;
	for (auto &s : G) cin >> s;
	for (int i = 0; i < G.size(); ++i) {
		for (int j = i + 1; j < G.size(); ++j) {
			for (int k = j + 1; k < G.size(); ++k) {
				if (valid(G[i], G[j], G[k])) {
					f = true;
					cout << i + 1 << " " << j + 1 << " " << k + 1<< endl;
				}
			}
		}
	}
	if (!f) cout << "no sets" << endl;
	return 0;
}
