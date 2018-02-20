#include <iostream>
#include <string>

using namespace std;

string toBinary(long long num){
	
	string binary;

	while(num != 0){
		binary += (num % 2 == 0) ? "0" : "1";
		num /= 2;
	}

	return binary;

}

string reverse(string str){
	
	long long beg=0, end=str.size();
	while(beg > end){
		char temp = str[end];
		str[end] = str[beg];
		str[beg] = temp;
		beg++;
		end--;
	}

	return str;
}

int main(){

	long long num;
	string binary;

	cin >> num;

	binary = toBinary(num);
	binary = reverse(binary);

	cout << stoi(binary,NULL,2) << endl;

	return 0;
}
