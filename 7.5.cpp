#include <iostream>
using namespace std;

int main() {
	int y=100;
	int a=--y;
	cout<<a<<" "<<y<<endl;
	int y1=100;
	int b=y1--;
	cout<<b<<" "<<y1<<endl;
	int x=50;
	cout<<x++<<" "<<x<<endl;
    int x1=50;
	cout<<++x1<<" "<<x1<<endl;
	return 0;
}

