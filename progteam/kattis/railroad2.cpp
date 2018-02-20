#include <iostream>

using namespace std;

int main(){

	int junctions, switches;

	cin >> junctions >> switches;

	cout << ( ((junctions * 4) + (switches * 3)) % 2 == 0 ? "possible" : "impossible" ) << endl;

	return 0;
}
