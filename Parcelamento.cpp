#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const double juros_12=0.022, juros_13_24=0.02, juros_25_48=0.018, entrada=0.2, seguro=0.04, TAC=500;
	double preco_carro, valor_entrada, parcela, valor_financiado, total;
	cout << fixed << setprecision(2);
	cout << "Digite o valor do carro a ser financiado: ";
	cin >> preco_carro;
	do{
		cout << "Digite o valor da entrada (pelo menos " << entrada*preco_carro <<" ): ";
		cin >> valor_entrada;
	}while(valor_entrada < entrada * preco_carro);
	valor_financiado = (preco_carro-valor_entrada+TAC)*(1+seguro);
	cout << valor_financiado << endl;
	for (int prestacoes=12;prestacoes<=48;prestacoes++){
		double taxa_juros;
		if(prestacoes==12)
			taxa_juros=juros_12;
		else if(prestacoes>12 && prestacoes<=24)
			taxa_juros=juros_13_24;
		else
			taxa_juros=juros_25_48;
		total = valor_financiado*(1+prestacoes*taxa_juros);
		parcela = total/prestacoes;
	cout << "O valor da parcela " << prestacoes << "vezes é R$" << parcela << ". Valor total pago: R$" << total+valor_entrada << endl;
	}
	return 0;
}
