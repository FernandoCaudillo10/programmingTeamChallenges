#include <iostream>

using namespace std;

int main(){
        int testCases, a, b, n, count=0;
        cin >> testCases;

        for(int i=0; i<testCases; i++){
		count = 0;
                cin >> a >> b >> n;
		for(int j=a; j<=b; j++){
               		if(j%n==0)
                 	       count++;
		}
                cout << count << endl;
        }


        return 0;
}

