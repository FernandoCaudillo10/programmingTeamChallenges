#include <iostream>

using namespace std;

int createGraph(int col){

	int counter = 0;
	bool two = true;

	for(int i = 0; i < col; i++){
		
		if(two){
			counter += 2;
		}
		else{
			counter += 1;
		}

		two = !two;
	}

	return counter;

}

int main(){

	int col;

	while(true){
	
		cin >> col;
		if(col == -1){
			break;
		}
		
		
		cout << createGraph(col) << endl;

	}

	return 0;
}
