#include <iostream>
#include <vector>
#include <limits>   
#include <iomanip> 
using namespace std;
struct entre {
	int fecha;        
	int nmin;
	int nseg;
	int cmin;
	int cseg;
	int pmin;
	int pseg;
};
int ctt(int min, int seg) {
	return min * 60 + seg;
}
void emt(const vector<entre>& entres, int& mt, int& fmt) {
	mt = numeric_limits<int>::max();
	fmt = 0;
	for (const auto& entre : entres) {
		int tt = ctt(entre.nmin, entre.nseg) +
			ctt(entre.cmin, entre.cseg) +
			ctt(entre.pmin, entre.pseg);
		if (tt < mt) {
			mt = tt;
			fmt = entre.fecha;
		}
	}
}
float cpt(const vector<entre>& entres) {
	int stt = 0;
	int centre = entres.size();
	for (const auto& entre : entres) {
		int tt = ctt(entre.nmin, entre.nseg) +
			ctt(entre.cmin, entre.cseg) +
			ctt(entre.pmin, entre.pseg);
		stt += tt;
	}
	return static_cast<float>(stt) / centre;
}
void emt(const vector<entre>& entres, int& pmt, int& fpm,
int& smt, int& fsm) {
	pmt = numeric_limits<int>::max();
	smt = numeric_limits<int>::max();
	fpm = 0;
	fsm = 0;
	for (const auto& entre : entres) {
		int tt = ctt(entre.nmin, entre.nseg) +
			ctt(entre.cmin, entre.cseg) +
			ctt(entre.pmin, entre.pseg);
		if (tt < pmt) {
			smt = pmt;
			fsm = fpm;
			pmt = tt;
			fpm = entre.fecha;
		} else if (tt < smt) {
			smt = tt;
			fsm = entre.fecha;
		}
	}
}
int main() {
 vector<entre> entres;
 int n;
 cout << "Ingrese la cantidad de entrenamientos a registrar: ";
 cin >> n;
 for (int i = 0; i < n; ++i) {
	 entre entre;
	 cout << "Entrenamiento #" << i + 1 << ": ";
	 cout << "Fecha (aaaammdd): ";
	 cin >> entre.fecha;
	 cout << "Tiempo de natacion (Min,Seg): ";
	 cin >> entre.nmin >> entre.nseg;
	 cout << "Tiempo de ciclismo (Min,Seg): ";
	 cin >> entre.cmin >> entre.cseg;
	 cout << "Tiempo de pedestrismo (Min,Seg): ";
	 cin >> entre.pmin >> entre.pseg;
	 entres.push_back(entre);
 }
 int mtn, mtc, mtp;
 int fmn, fmc, fmp;
 int pmtt, smtt;
 int fpmt, fsmt;
 emt(entres, mtn, fmn);
 emt(entres, mtc, fmc);
 emt(entres, mtp, fmp);
 float ptt = cpt(entres);
 emt(entres, pmtt, fpmt,
smtt, fsmt);
 cout << "Mejor tiempo de natacion: " << mtn << " (Fecha: " << fmn << ")" << endl;
 cout << "Mejor tiempo de ciclismo: " << mtc << " (Fecha: " << fmc << ")" << endl;
 cout << "Mejor tiempo de pedestrismo: " << mtp << " (Fecha: " << fmp << ")" << endl;
 cout << "Promedio de los tiempos totales: " << fixed << setprecision(2) << ptt << " seg" << endl;
 cout << "Primer mejor tiempo total: " << pmtt << " (Fecha: " << fpmt << ")" << endl;
 cout << "Segundo mejor tiempo total: " << smtt << " (Fecha: " << fsmt << ")" << endl;
 return 0;
}
