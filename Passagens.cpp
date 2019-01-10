#include <iostream>
using namespace std;
bool *aloca_assentos(int num_assentos){
	return new bool [num_assentos];
}

string *aloca_nomes(int num_assentos){
	return new string [num_assentos];
}

void desaloca_dados(bool *assentos, string *nomes){
	delete [] assentos;
	delete [] nomes;
}

void inicializa_assentos(bool *assentos){
}

bool eh_opcao_valida(int opcao){
	return false;
}

int leh_opcao(){
	return 0;
}

void executa_opcao(int opcao, bool *assentos, string *nomes){
	reserva_assento(int poltrona);
}

int main(){
	const int num_assentos=200, reserva=1, cancelamento=2, lista=3, disponiveis=4, encerra=5;
	bool *reservados;
	string *nomes;
	
	reservados = aloca_assentos(num_assentos);
	nomes = aloca_nomes(num_assentos);
	
	inicializa_assentos(reservados);
	
	int opcao;
	do{
		opcao=leh_opcao();
		executa_opcao(opcao, reservados, nomes);
		}while(opcao!=encerra);
	desaloca_dados(reservados, nomes);
	return 0;
}









