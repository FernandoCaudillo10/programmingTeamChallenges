#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct maxpoint{
	int maxvalue;
	int xpos;
	int ypos;
};

int maxFlies(vector<string> &grid, int range, vector<maxpoint> &m){
	int max = 0;
	for(int i=1; i < grid.size(); i++){
		for(int j=1; j < grid[0].size(); j++){
			int flies = 0;

			if(i+range >= grid.size() || j+range >= grid[0].size())
				continue;

			for(int innerI = i; innerI < i+range; innerI++){
				for(int innerJ = j; innerJ < j+range; innerJ++){
					if(grid[innerI][innerJ] == '*'){
						flies++;
					}
				}
			}

			if(flies > max){
				max = flies;
				maxpoint temp;
				temp.maxvalue = max;
				temp.xpos = j;
				temp.ypos = i;
				m.push_back(temp);
			}
		}
	}
	return max;
}

void placeRacket(vector<string> &grid, int range, int max, vector<maxpoint> &m){
	
	for(auto point : m){
		if(point.maxvalue == max){
			int topLeftX = point.xpos-1;
			int topLeftY = point.ypos-1;
			int difference = range+1;

			if(topLeftY+difference >= grid[0].size() ||
			   topLeftX+difference >= grid.size() ){

				continue; 
			}
			grid[topLeftY][topLeftX] = '+';
			grid[topLeftY+difference][topLeftX+difference] = '+';
			grid[topLeftY+difference][topLeftX] = '+';
			grid[topLeftY][topLeftX+difference] = '+';
			for(int side=1; side <= range; side++){
				grid[topLeftY][topLeftX+side] = '-';
				grid[topLeftY+side][topLeftX] = '|';
				grid[topLeftY+side][topLeftX+difference] = '|';
				grid[topLeftY+difference][topLeftX+side] = '-';
			}
			return;	
		}
	}
}

int main(){
	
	int r, s, k;
	cin >> r >> s >> k;

	vector<string> grid(r);

	for(auto &line : grid)
		cin >> line;
	
	vector<maxpoint> points;
	
	int max = maxFlies(grid, k-2, points);
	
	placeRacket(grid, k-2 , max, points);

	cout << max << endl;
	for(auto line: grid)
		cout << line << endl;

	return 0;
}
