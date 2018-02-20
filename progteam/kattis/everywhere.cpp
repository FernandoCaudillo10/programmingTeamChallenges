#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t-->0){
		
		int cities;
		cin >> cities;

		set<string> uniqueCities;
		while(cities-->0){
			string city;
			cin >> city;

			uniqueCities.insert(city);
			
		}

		cout << uniqueCities.size() << endl;

	}

	return 0;
}
