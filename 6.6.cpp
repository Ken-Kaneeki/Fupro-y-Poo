#include <iostream>
using namespace std;

int main() {
	float pi=3.14;
	float radio;
	cout<<"Ingrese el radio del circulo: ";
	cin>>radio;
	float area=pi*radio*radio;
	float perimetro=2*pi*radio;
	cout<<"Su area es: "<<area<<" cm"<<endl;
	cout<<"Su perimetro es: "<<perimetro<<" cm"<<endl;
	return 0;
}

