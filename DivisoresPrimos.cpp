#include <iostream>
using namespace std;
int main(){
	int numero, divisor=2;
	bool mesmodivisor=false;
	cout << "Digite um número para saber se ele é formado por multiplicação de números primos distintos: ";
	cin >> numero;
	do{
		if(numero%mesmodivisor==0){
			if(mesmodivisor)
				break;
			else
				mesmodivisor=true;
			numero/=divisor;
		}else{
			++divisor;
			mesmodivisor=false;
		}
	}while(numero>1);
	if(numero>1 && mesmodivisor)
	cout << "Não. O divisor " << divisor << " é repetido." << endl;
	else
	cout << "Sim! O número é formado por números primos distintos" << endl;
	
	return 0;
}
