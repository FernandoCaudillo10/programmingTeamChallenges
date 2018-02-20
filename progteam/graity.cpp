#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int num1, num2, y, count=0, ball;

cin >> num1 >> num2;

char arr[num1][num2];

for(y=0; y<num1; y++){
	for(int x=0; x<num2; x++)
		cin >> arr[y][x];

for(int x=0; x<num2; x++){
	for(y=num1-1; y>=0;y)
	{
		if(arr[y][x] == '.')
		{
			count++;
			y--;
		}
		else if(arr[y][x] == '#')
		{
			count = 0;	
			y--;
		}
		else if(arr[y][x] == 'o')
			break;
	}

ball = y;

cout << "lll " << endl;
while(ball <= 0)
{
swap(arr[ball][x], arr[ball+count][x]);
ball--;
}

cout << "olo" << endl;
for(y=0; y<num1; y++){
	for(int x=0; x<num2; x++)
		cout << arr[y][x];
	cout << endl; }

count =0;

}
}
return 0;
}
