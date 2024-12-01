#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct ficha{
	int dni;
	float altura;
};
void opad(vector<ficha>& A){
	sort(A.begin(),A.end(),[](const ficha& a,const ficha& b){
		if(a.altura==b.altura){
			return a.dni>b.dni;
		}
		return a.altura>b.altura;
	});
}
int main() {
	vector<ficha> pers={
		{46449425,1.81},
		{46994524,1.75},
		{64494245,1.71},
		{76512345,1.71},
		{51231465,1.71}
	};
	opad(pers);
	for(const auto& persona: pers){
		cout<<"Dni: "<<persona.dni<<" / "<<"Altura: "<<persona.altura<<endl;
	}
	return 0;
}

