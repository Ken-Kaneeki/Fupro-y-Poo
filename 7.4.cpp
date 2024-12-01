#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	float  x=4.5,y=12.5;
	int z=10,u=8;
	char letra= 'm';
	float a=++u/2.0;
	char b=letra + 2;
	float c=(x-y)/2+abs(u-y);
	int d=3 + u % 3;
	float e=u++/2.0;
	int f=2*--u+x/3;
	char g=letra +=1;
	int h=pow(z,3);
	float i=(x=(x+1)/2);
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	cout<<g<<endl;
	cout<<h<<endl;
	cout<<i<<endl;
	return 0;
}

