#include <iostream>
using namespace std;

struct Poltrona{
	string nomePassageiro;
	double valorPago;
};

struct Onibus{
	string origem, destino;
	Poltrona;
	*passageiros[50];
};

bool CancelaPassagem(Onibus &onibus, string nome){
	for(int i=0;i<50;i++)
		if(onibus.passageiros[i]!=NULL && onibus.passageiros[i]->nomePassageiros==nome){
			delete onibus.passageiros[i];
			onibus.passageiros=NULL;
			return true;
		}
	return false;
}

double valorArrecadado(const Onibus &onibus){
	double valor=0.0;
	for (int i=0;i<50;i++)
		if(onibus.passageiros[i]!=NULL)
			valor +=onibus.passageiros[i]->valorPago;
		return valor;
}


