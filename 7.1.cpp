#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c,x,z;
	cin>>a>>b>>c>>x>>z;
	int r1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
	int r2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
	cout<<"Raiz 1: "<<r1<<endl;
	cout<<"Raiz 2: "<<r2<<endl;
	float r3=log(2*x-1)+-(exp(2*x)+pow(sqrt(pow(x,a)-3*a*x),5))/2*x-1;
	cout<<"Raiz 3: "<<r3<<endl;
	float r4=(exp(a)/a-x)+(exp(a+z)*sin(a-x)+exp(pow(x,2)))/2;
	cout<<"Raiz 4: "<<r4<<endl;
	return 0;
}

