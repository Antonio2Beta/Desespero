#include <iostream>
using namespace std;
int main(){
	int numero, divisor=2;
	bool prim_divisor=true;
	cout << "Digite um número para exibi-lo como produto dos seus fatores primos ";
	cin >> numero;
	cout << numero << " = ";
	do{
		if(numero%divisor==0){
			numero /= divisor;
			if(prim_divisor){
				cout << divisor;
				prim_divisor=false;
			}else
				cout << "*" << divisor;
		}else
			++divisor;
	}while(numero>1);
	cout<<endl;
	return 0;
}
