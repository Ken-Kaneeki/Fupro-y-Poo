#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	float disc=(pow(b,2)-4*a*c);
	float r1=(-b+sqrt(disc))/2*a;
	float r2=(-b-sqrt(disc))/2*a;
	if(disc>=0){
		cout<<"Raiz 1: "<<r1<<endl;
		cout<<"Raiz 2: "<<r2<<endl;
	}else{
		cout<<"Las raices son complejas"<<endl;
	}
	return 0;
}

