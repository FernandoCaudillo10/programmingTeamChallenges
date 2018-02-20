#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int A = 0;
	int C = 1;
	int G = 2;
	int T = 3;

	int t;
	cin >> t;
	while(t-->0){
		string dna;
		cin >> dna;
		
		long long c = 0;
		long long result = 0;
		
		for(long long i= dna.length()-1; i>=0; i--){
			if(dna[c]=='C')
				result += C * pow(4,i);	
			else if(dna[c]=='G')
				result += G * pow(4,i);
			else if(dna[c]=='T')
				result += T * pow(4,i);
			c++;
		}
		cout << result << endl;

	}

	
	return 0;
}
