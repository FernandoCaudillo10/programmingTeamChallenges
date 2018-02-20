#include <iostream>

using namespace std;

void moveApples(char (*arr)[5], int row, int col){
	for(int j=0; j<col; j++){
		int appleCount = 0;
		int hashloc= -1;
		bool hasHash = false;
		for(int i=0; i<row; i++){
			if(arr[i][j] == 'o'){
				arr[i][j]='.';
				appleCount++;
			}
			else if(arr[i][j] == '#'){
				hasHash = true;
				hashloc = i;	
			}
			else if(i == row-1 && arr[i][j] == '.' && hashloc == -1){
				hashloc = i;
			}
		}
		if(hasHash){
			for(int i=(hashloc)-appleCount; i< hashloc; i++){
				arr[i][j] = 'o';
			}
		}
		else{
			for(int i=row-appleCount; i< row; i++){
				arr[i][j] = 'o';
			}
		}
	}

}

int main(){

	int row=1, col=1;

	while(row != 0 && col != 0){
		cin >> row >> col;
		vector<vectoc<char>> arr; 
		char c;
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				cin >> c;
				arr
			}
		}
		moveApples(arr, row, col);
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				cout << arr[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
