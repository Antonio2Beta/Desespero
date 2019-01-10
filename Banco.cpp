#include <iostream>
using namespace std;

struct Cliente{
	string nome;
	int ficha;
};

void inserirNoFinal(Fila &fila, Cliente c);

Cliente removeDoInicio(Fila &fila);

int tamanho(const Fila&);

int main(){
	Fila filaNormal, filaPrioridade;
	int contNormal=1, contPrioridade=1,opcao,prioridade;
	do{
		cout << "Digite a opção: 1- Novo Cliente \n 2- Atendimento \n 3- Sair";
		cin >> opcao;
		switch(opcao){
			case 1:
				Cliente c;
				cout << "Digite o nome do cliente: ";
				cin >> c.nome;
				cout << "Digite 1 se o cliente for prioridade ou outro número caso contrário: ";
				cin >> prioridade;
				if(prioridade==1){
					c.ficha=contPrioridade++;
					inserirNoFinal(filaPrioridade, c);
					}else{
						c.ficha=contNormal++;
						inserirNoFinal(filaNormal, c);
						}
						break;
			case 2:
				Cliente proximo;
				if(tamanho(filaPrioridade)!=0){
					proximo=removeDoInicio(filaPrioridade);
					cout << "Próximo cliente prioritário."<<endl;
					}else{
						proximo=removeDoInicio(filaNormal);
						cout << "Próximo cliente."<<endl;
						}
						cout << "Ficha: " <<proximo.ficha<<"\nNome: "<<proximo.nome<<endl;
						break;
			case 3: default: break;
			}
		}while(opcao!=3);
		return 0;
}
