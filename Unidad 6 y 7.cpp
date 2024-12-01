#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	
	enum meses { ene, feb, mar, abr, may, jun, jul, ago, set, oct, nov, dic };
	meses mes = abr;
	cout<<mes<<endl;
		cout << "Ingrese los catetos: ";
		float cat1, cat2;
		cin >> cat1 >> cat2;
		// calculos
		float hipo = sqrt( cat1*cat1 + cat2*cat2 );
		float perim = cat1+cat2+hipo;
		float area = cat1*cat2/2;
		// informe de resultados, tabla a dos columnas
		const int col1 = 15, col2 = 7; // ancho de las columnas
		// dejar linea en blanco, y setear el formato de reales a 3 decimales
		cout << endl << fixed << setprecision(3);
		// fila 1
		cout << setw(col1) << left << setfill('.') << "Hipotenusa" << ":"
			<< setw(col2) << right << setfill(' ') << hipo << endl;
		// fila 2
		cout << setw(col1) << left << setfill('.') << "Area" << ":"
			<< setw(col2) << right << setfill(' ') << area << endl;
		// fila 3
		cout << setw(col1) << left << setfill('.') << "Perimetro" << ":"
			<< setw(col2) << right << setfill(' ') << perim << endl;
		cout << "Lenguajes de Programación" << endl<<endl;
		cout<<setfill('.');
			cout<<"1. Basic"<<setw(20)<<"pág. 1"<<endl;
		cout<<"2. Pascal"<<setw(20)<<"pág. 2"<<endl;
		cout<<"3. Go"<<setw(20)<<"pág. 3"<<endl;
		cout<<"4. Python"<< setw(20)<<"pág. 5"<<endl;
		cout<<"5. ISO C++"<< setw(20)<<"pág. 8"<<endl;
		float a, b, c;
		cin >> a >> b >> c;
		float d = b*b-4*a*c;
		if (d>=0) { // raices reales
			float r1 = (-b+sqrt(d))/(2*a),
				r2 = (-b-sqrt(d))/(2*a);
			cout << r1 << endl << r2 << endl;
		} else { // raices complejas
			float pr = -b/2*a;
			float pi = sqrt(-d)/2*a;
			cout << pr << "+" << pi << "i" << endl;
			cout << pr << "-" << pi << "i" << endl;
		}		float sum=0;
		int N;
		cin >> N;
		for ( int i=0; i<N; ++i ) {
			int aux;
			cin >> aux;
			sum += aux;
		}
		cout << sum/N << endl;
		int ang_gra;
		cout << "Ingrese un ángulo en grados:";
		cin >> ang_gra;
		float ang_rad = ang_gra*3.14/180; // pasa a radianes el ángulo
		cout << "El seno del ángulo es: " << sin(ang_rad) << endl;
		int m;
		cin >> m;
			switch ( m ) {
			case 1:
				cout << "m es 1" << endl;
				break;
			case 2:
			case 3:
				cout << "m es 2 o 3" << endl;
				break;
				default :
					cout << "no está entre 1 y 3" << endl;
		}
			int asd=0;
			while (asd<6) {
				asd++;
				if (asd==4)
					break;
				cout << a << " ";
			}
			int ads=0;
			while (ads<6) {
				ads++;
				if (ads==4)
					continue;
				cout << a << " ";
			}						
		return 0;
}

