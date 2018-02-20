#include <iostream>
#include <map>

using namespace std;

int main(){
	
	map<int, int> mX;
	map<int, int> mY;

	for(int i=0; i<3; i++){
		int x, y;
		cin >> x >> y;
		if(mX.insert(make_pair(x,0)).second == false){
			mX[x]++;
		}
		else{
			mX.insert(make_pair(x,0));
		}
		if(mY.insert(make_pair(y,0)).second == false){
			mY[y]++;
		}
		else{
			mY.insert(make_pair(y,0));
		}
	}
	map<int,int>::iterator it = mX.begin();
	map<int,int>::iterator it1 = mY.begin();

	while(it != mX.end()){
		if(it->second == 0)
			cout << it->first << " ";
		it++;
	}
	while(it1 != mY.end()){
		if(it1->second == 0)
			cout << it1->first << endl;
		it1++;
	}
	
	return 0;
}
