#include <iostream>
using namespace std;

string to_bin(char c) {
	string res;
	while (c) {
		res += to_string(c % 2);
		c /= 2;
	}
	while (res.size() < 7) {
		res += '0';
	}
	return res;
}

void solve(int &ones, int &zeros, char c) {
	string bin = to_bin(c);
	for (char c : bin) {
		if (c == '0') ++zeros;
		else ++ones;
	}
}

bool solve(string &line) {
	int ones = 0, zeros = 0;
	for (char c : line) {
		solve(ones, zeros, c);
	
	}
	return !(ones & 1 || zeros & 1);
}

int main() {
	string line;
	while (getline(cin, line)) {
		cout << (solve(line) ? "free" : "trapped") << endl;
	}
	return 0;
}
