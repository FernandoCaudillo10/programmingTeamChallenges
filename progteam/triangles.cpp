#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;


bool isright(vector<int> tri){
	if(pow(tri[0],2)+pow(tri[1],2) == pow(tri[2],2))
		return true;
	return false;

}

int main(){
	
	int tcc;

	cin >> tcc;

	while(tcc--){
		vector<int> tri1;
		vector<int> tri2;
		
		for(int i=0; i<6; i++){
			int num;
			if(i<3){
				cin >> num;
				tri2.push_back(num);
			}
			else{
				cin >> num;
				tri1.push_back(num);
			}
		}
		sort(tri1.begin(),tri1.end());
		sort(tri2.begin(),tri2.end());
			
		if(isright(tri1) && isright(tri2) && (tri1==tri2))
			cout << true << endl;
		else
			cout << false << endl;
	}
		
	return 0;
}
