#include <iostream>
#include <string>

using namespace std;

int main(){

	int test;
	cin >> test;
	while(test-->0){
		
		string name, school, born;
		int courses;
		int apply = 0;
		cin >> name >> school >> born >> courses;
			
		if(stoi(school.substr(0,4)) >= 2010){
			cout << name << " eligible" << endl;
		}
		else if(stoi(born.substr(0,4)) >= 1991){
			cout << name << " eligible" << endl;
		}
		else if(courses > 40){
			cout << name << " ineligible" << endl;
		}
		else{
			cout << name << " coach petitions" << endl;
		}

	}

	return 0;
}
