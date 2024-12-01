#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;
	cout<<"Ingrese el valor de A: ";
	cin>>a;
	cout<<"Ingrese el valor de B: ";
	cin>>b;
	cout<<"Ingrese el valor de C: ";
	cin>>c;
    int r1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
	int r2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
	cout<<"Raiz 1: "<<r1<<endl;
	cout<<"Raiz 2: "<<r2<<endl;
	return 0;
}

