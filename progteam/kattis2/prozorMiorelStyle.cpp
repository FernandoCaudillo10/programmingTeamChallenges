#include <iostream>
#include <vector>

using namespace std;

const vector<vector<int>> D4 = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
#define FOR(i, s, e) for(int i = s, fe__ = e; i < fe__; ++i)
#define I(s, e) FOR(i, s, e)
#define REP(n) I(0, n)
#define INFL for(;;)

int main(){
		
	for(auto d : D4) {
		bool first = true;
		REP(w + 1) {
			grid[bi][bj] = first ? '+' : (d[0] == 0 ? '-' : '|');
			first = false;
			bi += d[0];
			bj += d[1];
		}
	}

	return 0;
}
