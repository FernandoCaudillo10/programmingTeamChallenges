#include <iostream>
#include <vector>

using namespace std;

int main(){

	
	vector<string> grid(5);

	for(auto &r : grid){
		cin >> r;
	}
	int count = 0;	
	bool isValid = true;
	for(int i=0; i<grid.size() && isValid; i++){
		for(int j=0; j<grid[i].size() && isValid; j++){
			if(grid[i][j] == 'k'){
				count++;
				if(i-2 > 0 && j-1 > 0){
					if(grid[i-2][j-1] == 'k'){
						cout << "invalid" << endl;
						isValid = false;
						break;
					}
				}
				if(i-1 > 0 && j-2 > 0){

					if(grid[i-1][j-2] == 'k'){
						cout << "invalid" << endl;

						isValid = false;
						break;
					}
				}
				if(i-2>0 && j+1 <grid[i].size()){

					if(grid[i-2][j+1] == 'k'){

						cout << "invalid" << endl;
						isValid = false;
						break;
					}
				}
				if(i-1>0 && j+2 < grid[i].size()){

					if(grid[i-1][j+2] == 'k'){

						cout << "invalid" << endl;
						isValid = false;
						break;
					}
				}
				if(i+2 < 5 && j-1 >0){

					if(grid[i+2][j-1] == 'k'){
						cout << "invalid" << endl;
						isValid = false;
						break;

					}
				}
				if(i+1 < 5 && j-2 > 0){

					if(grid[i+1][j-2] == 'k'){
						cout << "invalid" << endl;
						isValid = false;
						break;

					}
				}
				if(i+2 < 5 && j+1 < 5){

					if(grid[i+2][j+1] == 'k'){
						cout << "invalid" << endl;
						isValid = false;
						break;
					}
				}
				if(i+1 < 5 && j+2 < 5){
					if(grid[i+1][j+2] == 'k'){
						cout << "invalid" << endl;
						isValid = false;
						break;
					}
				}
			}
		}
	}
	
	if(isValid && count == 9){
		cout << "valid" << endl;
	}
	else if({
		cout << "invalid" << endl;
	}

	return 0;
}
