#include <iostream>
#include <cmath>
using namespace std;
bool esprimo(int n){
	int limite=sqrt(n);
	for(int i=2;i<=limite;i+=1){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main() {
	int cont=0,n=1;
	while(cont<1000){
		if(esprimo(n)){
			cont++;
			cout<<cont<<" Es primo de: "<<n<<endl;
		}
		n++;
	}
	return 0;
}

