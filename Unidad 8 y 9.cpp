#include <iostream>
#include <cmath>
#include <vector>
#include <matrix>
#include <iomanip>
using namespace std;
float promedio3(int x, int y, int z) { // definición
	float w=(x+y+z)/3.0 ;
	return w;
}
pair<int,int> division_entera(int dividendo, int divisor) {
	int resultado = dividendo / divisor;
	int resto = dividendo % divisor;
	return {resultado,resto};
}
int potencia(int x,int b){
	int res=1;
	for(int i=0;i<b;i++)
		res *=x;
	return res;
}
float areac(float r){
		float area=3.14*r*r;
		return area;
}
bool primo(int n){
	for(int i=2;i<n;i++) { 
		if(n%i==0) return false;
	}	
	return true;
}
pair<float,float> raices (float a, float b, float c) {
	float sqrt_d = sqrt(b*b-4*a*c);
	float r1 = (-b+sqrt_d)/(2*a);
	float r2 = (-b-sqrt_d)/(2*a);
	return {r1,r2};
}
vector<int> crea_vector(int n, int min, int max) {
	vector<int> v(n);
	for(int i=0; i<n; i++)
		v[i] = rand()%(max-min+1)+min;
	return v;
}
void muestra_vector(string nom, const vector<int> &v) {
	for (unsigned int i=0;i<v.size();i++)
		cout << nom << "[" << i << "] = " << v[i] << endl;
}
int main() {
	int d1, d2, d3;
	cout <<"Ingrese el primer dato: " ; cin >> d1;
	cout <<"Ingrese el segundo dato: "; cin >> d2;
	cout <<"Ingrese el tercer dato: " ; cin >> d3;
	float p = promedio3(d1, d2, d3);
	cout <<"El promedio es: " << p << endl;
	int a, b;
	cin >> a >> b;
	pair<int,int> r = division_entera(a,b);
	cout << "Resultado: " << r.first << endl;
	cout << "Resto: " << r.second << endl;
	float base, exponente;
	cout << "Ingrese base y exponente: ";
	cin >> base >> exponente;
	float result = pow(base,exponente);
	cout << base << "^" << exponente
		<< "=" << result << endl;	int x,z;
	cin>>x>>z;
	int resulta=potencia(x,z);
	cout<<resulta<<endl;
	int j;
	cin>>j;
	int radio=areac(j);
	cout<<radio<<endl;
	int numap=2,cantp=0;
	while(cantp<100){
		if(primo(numap)){
			cout<<numap<<endl;
			cantp++;
		}
		numap++;
	}
	vector<int> f(10);
	cout << "v tiene " << f.size()
		<< " elementos:" << endl;
	for(unsigned int i=0; i<f.size(); ++i){
		f[i]=rand();
		cout << f[i] << endl;}
	f.resize(20);
	cout << "v tiene " <<f.size()
		<< " elementos:" << endl;
	for(unsigned int i=0; i<f.size(); ++i){
		f[i]=rand();
		cout << f[i] << endl;}
	matrix<int> m = { {12,34,56}, {78,90,100} };
	for (unsigned int i=0;i<m.size(0);i++) {
		// muestra la fila i
		for (unsigned int j=0; j<m.size(1); j++)
			cout<<setw(4)<<m[i][j];
			cout<<endl; // avanza a la próxima línea
	}
	int h;
	cout << "Tamaño: ";
	cin >> h;
	vector<int> v = crea_vector(h, 0, 100);
	cout << "El vector es: " << endl;
	muestra_vector("v", v);return 0;
}

