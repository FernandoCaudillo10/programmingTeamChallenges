#include <iostream>
#include <string>
#include <vector>

using namespace std;

int maxFlies(vector<string> &grid, int range){
	int max = 0;
	for(int i=0; i <= grid.size()-range; i++){
		for(int j=0; j <= grid[0].size()-range; j++){
			int flies = 0;
			for(int ij = i; ij < (i+range >= grid.size() ? false : i+range); ij++){
				for(int jj = j; jj < (j+range >= grid[0].size() ? false : j+range); jj++){
					if(grid[ij][j] == '*'){
						flies++;
					}
				}
			}
			if(flies > max)
				max = flies;
		}
	}
	return max;
}

void placeRacket(vector<string> &grid, int range, int max){

	for(int i=0; i <= grid.size()-range; i++){
		for(int j=0; j <= grid[0].size()-range; j++){
			int flies = 0;
			for(int ij = i; ij < (i+range >= grid.size() ? false : i+range); ij++){
				for(int jj = j; jj < (j+range >= grid[0].size() ? false : j+range); jj++){
					if(grid[ij][jj] == '*'){
						flies++;
					}
				}
			}
			if(flies == max){
				int topLeftX = (i-1 < 0 ? 0 : i-1);
				int topLeftY = (j-1 < 0 ? 0 : j-1);
				grid[topLeftX][topLeftY] = '+';
				grid[topLeftX+range+1][topLeftY+range+1] = '+';
				grid[topLeftX+range+1][topLeftY] = '+';
				grid[topLeftX][topLeftY+range+1] = '+';
				for(int side=1; side <= range; side++){
					grid[topLeftX][topLeftY+side] = '-';
					grid[topLeftX+side][topLeftY] = '|';
					grid[topLeftX+side][topLeftY+range+1] = '|';
					grid[topLeftX+range+1][topLeftY+side] = '-';
				}
				return; 
			}
		}
	}

}

int main(){

	int r, s, k;
	cin >> r >> s >> k;

	vector<string> grid(r);

	for(auto &line : grid)
	cin >> line;

	int max = maxFlies(grid, k-2);
	placeRacket(grid, k-2 , max);

	cout << max << endl;
	for(auto line: grid)
	cout << line << endl;

	return 0;
}
