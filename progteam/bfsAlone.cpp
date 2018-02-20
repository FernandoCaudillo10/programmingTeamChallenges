#include <iostream>

using namespace std;

class Graph{

	int size;

	list<int> *adj;

	public:
		
		Graph(int size);

		addEdge(int vertex, int connectsTo);

		BFS();

}

Graph::Graph(int size){
	
	this->size = size;
	adj = new list<int>[size];

} 

Graph::addEdge(int vertex, int connectsTo){

	

}

int main(){

	

	return 0;
}
