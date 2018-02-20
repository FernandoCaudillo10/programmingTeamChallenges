#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <queue>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define hmap unordered_map
#define hset unordered_set
#define omap map
#define oset set
#define tmap map
#define tset set
#define pii pair<int,int>
#define sp shared_ptr

template <class T> using minheap = priority_queue<T, vector<T>, greater<T>>;
template <class T> using maxheap = priority_queue<T, vector<T>, less<T>>;

#define R(x) (([]{ x v; cin >> v; return v; })())
#define RLN (([]{ string l; getline(cin, l); return l; })())
#define RILN stoi(RLN)
#define RC R(char)
#define RI R(int)
#define RL R(long int)
#define RLL R(ll)
#define RULL R(ull)
#define RD R(double)
#define RLD R(ld)
#define RS R(string)

#define FOR(i, s, e) for (int i = s, fe__ = e; i < fe__; ++i)
#define I(s, e) FOR(i, s, e)
#define REP(n) I(0, n)
#define INFL for(;;)

template <class T> string join(const T& v, string sep = " ") {
	bool first = true;
	stringstream ss;
	for (auto x : v) {
		if (!first) ss << sep;
			ss << x;
			first = false;
		}
	return ss.str();
}

template <class T> ostream& operator<<(ostream& os, const vector<T>& v) {
	  return os << '[' << join(v, ", ") << ']';
}
template <class T> ostream& operator<<(ostream& os, const hset<T>& v) {
	  return os << '{' << join(v, ", ") << '}';
}
template <class K, class V> ostream& operator<<(ostream& os, const hmap<K,V>& v) {
	  return os << '{' << join(v, ", ") << '}';
}
template <class A, class B> ostream& operator<<(ostream& os, const pair<A,B>& p) {
	  return os << '(' << p.first << ", " << p.second << ')';
}
template <class A, class B, class C> ostream& operator<<(ostream& os, const tuple<A,B,C>& t) {
	  return os << '(' << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << ')';
}
template <class T> istream& operator>>(istream& is, vector<T>& v) {
	  for (auto& x : v) is >> x;
	    return is;
}

vector<bool> BFS(hmap<int, hset<int> > graph, int houses){

	vector<bool> visited(houses);	

	queue<int> q;

	visited[0] = true;
	q.push(0);

	while(!q.empty()){

		int current = q.front();
		//cout << "visited: " << current << "\n";
		q.pop();

		for(auto iter = graph[current].begin(); iter != graph[current].end(); iter++){
			
			if(!visited[*iter]){
				visited[*iter] = true;
				q.push(*iter);

			}

		}

	}
	

	return visited;
}

int main(){

	int houses = RI;

	hmap<int, hset<int> > graph(houses);

	REP(RI){
		
		int a = RI-1;
		int b = RI-1;

		graph[a].emplace(b);
		graph[b].emplace(a);

	}

	//cout << graph << "\n";
	
	vector<bool> visited = BFS(graph, houses);
	bool connected = true;
	for(int i=0; i<visited.size(); i++){
		if(!visited[i]){
			cout << i+1 << "\n";
			connected = false;
		}
	}

	if(connected){
		cout << "Connected\n";
	}

	return 0;
}
