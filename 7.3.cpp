#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	float x=4.5,y=12.5;
	int z=10,u=8;
	char letra= 'm';
	bool a=x<y;
	bool b=(x <=y) || (letra == 'j');
	bool c=letra<='G';
	bool d=abs(x-y) > 7.0;
	bool e=z && u+2<z;
	bool f=(z>x)&&(letra<'m')|| (letra=='h');
	bool g='2'<=letra;
	bool h=('q'<'s') || false;
	bool i= sin(y-x) <=1;
	bool j=toupper(letra)=='M';
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	cout<<g<<endl;
	cout<<h<<endl;
	cout<<i<<endl;
	cout<<j<<endl;
	
	return 0;
}

