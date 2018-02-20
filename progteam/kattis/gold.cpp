#include <iostream>
#include <deque>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct coord{
	int x,y;
	char c;
};

void print_queue(deque<coord> q)
{
		while (!q.empty())
		{
			cout << q.front().x << " " << q.front().y<< endl;
			q.pop_front();
		}
		cout << endl;
		return;
}

int main(){
	int row, col;
	cin >> col >> row;
	
	vector<string> grid(row);
	for(auto &row : grid){
		cin >> row;
	}
	
	deque<coord> q;
	vector<int> DR = {-1,0,1,0};
	vector<int> DC = {0,1,0,-1};
	
	//-----STARTING POSITION

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(grid[i][j] == 'P'){
				coord start = {
						i, //x | row
						j, //y | col
						 grid[j][i] //c | char
					};
				q.push_back(start);
				grid[q.front().y][q.front().x] = '#';
			}
		}
	}
	
	int goldCount=0;
	//-----TRAVERSE GRID
		
	while(!q.empty()){
		bool trapAround = false;
		//-------------CHECKING AROUND L,D,R,U
		int goldCurrent = 0;
		
		for(int i=0; i<DR.size();i++){
			//--------IDEA... STORE ALL FOUR CORD WITH CHAR IN VECTOR<STRUCT>. LOOP THOUGH
			//                TO CHECK FOR 'T', THEN ASSIGN ALL TO '#' IF NO 'T', COUNT 'G'.		
			coord current = {
					q.front().x + DR[i],
					q.front().y + DC[i]
				};
			if(grid[current.y][current.x] == 'T'){
				for(int reverse=0;reverse<i;reverse++){
					//q.swap(q.front(), q.back());
					print_queue(q);
					if(!q.empty())
						q.pop_back();
					//q.pop_back();
				}		
				trapAround = true;
				continue;
			}
			else if(grid[current.y][current.x] == '#'){
					continue;
				}
			else if(grid[current.y][current.x] == 'G'){
				goldCurrent++;
				//grid[current.y][current.x] = '.';
			}

			q.push_back(current);
			//cout << current.x << " " << current.y << endl;
			grid[current.y][current.x] = '#';
		}
		if(trapAround)
			goldCurrent = 0;
		goldCount += goldCurrent;
		if(!q.empty())
			q.pop_front();
		for(auto row : grid){
			cout << row << endl;
		}

		cout << endl;// << q.front().x << q.front().y << endl;
		
	}//end queue while
	cout << endl << goldCount << endl;
	return 0;
}
