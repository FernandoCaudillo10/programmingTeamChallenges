#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int test;
	cin >> test;

	while(test-->0){

		int darts, points=0;
		cin >> darts;

		while(darts-->0){

			int a,b;

			cin >> a >> b;
			
			int c = sqrt(a*a+b*b);
			
			for(int i=1; i<=10; i++){
				if(c < 20){
					points += 10;
					break;
				}
				if( c > 20*(11-i) ){
					points += i-1;
					break;
				}
			}
		}
		
		cout << points << endl;

	}

	return 0;
}
