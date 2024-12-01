#include <iostream>
#include <cmath>
using namespace std;
float discriminante(float a,float b,float c){
	float discri=pow(b,2)-4*a*c;
	return discri;
}

int main() {
	float a,b,c;
	cin>>a>>b>>c;
	int discri=discriminante(a,b,c);
	if(discri>=0){
		int r1=-b+(sqrt(discriminante(a,b,c)))/2*a;
		int r2=-b-(sqrt(discriminante(a,b,c)))/2*a;
		cout<<"R1: "<<r1<<endl;
		cout<<"R2: "<<r2<<endl;
	}else{
		cout<<"Las raices son complejas"<<endl;
	}
    
	return 0;
}

