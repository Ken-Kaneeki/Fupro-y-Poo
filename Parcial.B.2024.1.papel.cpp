#include <iostream>
#include <vector>
using namespace std;
struct maquina{
	string juego,jugador;
	float precio,mayorpuntaje;
};
struct tarjeta{
	int numero_tarjeta,creditos=0,fecha;
	float saldo;
	string cliente;
};
bool comenzarJuego(vector<maquina> juego,vector<tarjeta> card,int nrotarjeta,string game,int fecha){
 float price;
 for(size_t i=0;i<juego.size();i++) { 
	 if(game==juego[i].juego){
		 price=juego[i].precio;
	 }
 }
 for(size_t j=0;j<card.size();j++) { 
	 if(nrotarjeta==card[j].numero_tarjeta && card[j].saldo>=price){
		 card[j].saldo=card[j].saldo-price;
		 cout<<"Ingrese la fecha de hoy: ";cin>>card[j].fecha;
		 return true;
	 }
 }
 return false;
}
void finalizarJuego(vector<maquina>juego,vector<tarjeta> card,int nrotarjeta,string game,float mpuntaje,float credito){
string auxiliar;
for(size_t i=0;i<card.size();i++) { 
	if(card[i].numero_tarjeta==nrotarjeta){
		card[i].creditos=card[i].creditos+credito;
		auxiliar=card[i].cliente;
	}
}
for(size_t j=0;j<juego.size();j++) { 
	if(juego[j].juego==game){
		if(mpuntaje>juego[j].mayorpuntaje){
			juego[j].mayorpuntaje=mpuntaje;
			juego[j].jugador=auxiliar;
		}
	}
}
}

float recargarTarjeta(vector<tarjeta>card,int nrotarjeta,int monto){
	float auxiliar=0;
	for(size_t i=0;i<card.size();i++) { 
		if(nrotarjeta==card[i].numero_tarjeta){
			card[i].saldo=card[i].saldo+monto;
			auxiliar=card[i].saldo;
		}
	}
	return auxiliar;
}
void eliminarTarjeta(vector<tarjeta>card,int fecha){
	int auxiliar=0;
	while(auxiliar!=-1){
	for(size_t i=0;i<card.size();i++) { 
		if(fecha%10000-card[i].fecha%10000==2){
			auxiliar=i;
		}else{auxiliar=-1;}
	}
	for(size_t j=0;j<card.size();j++) { 
		card[j]=card[j+1];
	}
	card.resize(card.size()-1);
	}
}
int main() {
	
	return 0;
}

