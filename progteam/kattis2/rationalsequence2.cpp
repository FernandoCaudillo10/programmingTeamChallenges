#include <iostream>
#include <vector>
#include <utility>
#include <sstream>
#include <queue>

using namespace std;

bool allfound(bool found[], long long sz){
	for(long long i=0; i<sz; i++){
		if(found[i] == false)
			return false;
	}
	return true;
}

int main(){

	long long test;
	cin >> test;

	vector<pair<long long, long long>> find(test);

	for(auto &p : find){
		long long trash;
		string parse;

		cin >> trash >> parse;
		parse.replace(parse.find('/'),1," ");

		stringstream fraction(parse);
		
		fraction >> p.first >> p.second;
	}

	queue<pair<long long, long long>> q;
	bool found[find.size()];
	q.push(make_pair(1,1));
	long long counter = 1;
	while(!allfound(found, find.size())){
		for(long long i=0; i<find.size(); i++){
			
			if(find[i].first == q.front().first && find[i].second == q.front().second){
				cout << i+1 << " " << counter << endl;
				found[i] = true;
			}
		
		}
		q.push(make_pair(q.front().first , q.front().first + q.front().second));
		q.push(make_pair(q.front().first + q.front().second , q.front().second));

		q.pop();
		counter++;
	}
	
	return 0;
}
