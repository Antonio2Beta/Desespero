#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const double faixa1=1693.72, faixa2=2822.90, teto=5645.80;
	const double taxa_faixa1=0.08, taxa_faixa2=0.09, taxa_teto=0.11;
	double sal_bruto, sal_liq, desc_inss;
	
	cout << "Digite o salário bruto do cidadão honesto e trabalhadeiro: ";
	cin>>sal_bruto;
	if (sal_bruto<=faixa1)
		desc_inss = sal_bruto * taxa_faixa1;
	else if (sal_bruto<=faixa2)
		desc_inss = sal_bruto * taxa_faixa2;
	else if (sal_bruto<teto)
		desc_inss = sal_bruto * taxa_teto;
	else
		desc_inss = teto * taxa_teto;
	
	sal_liq = sal_bruto - desc_inss;
	cout << fixed << setprecision(2);
	cout << "O desconto do INSS foi de: " << desc_inss << endl;
	cout << "O salário líquido do cidadão honesto e trabalhadeiro é: " << sal_liq << endl;
	
	return 0;
}
