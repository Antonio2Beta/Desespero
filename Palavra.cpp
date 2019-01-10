#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	const int tam=5;
	char palavra[5];
	cout << "Digite uma palavra com " << tam-1 << " caracteres! ";
	cin >> palavra;
	for (int i=0;i<tam-2;i++)
			for (int j=i+1;j<tam-1;j++)
				if(palavra[i]>palavra[j]){
					aux=palavra[i];
					palavra[i]=palavra[j];
					palavra[j]=aux;
				}
	do{
		cout << palavra << endl;
	}while(next_permutation(palavra,palavra+tam-1));
	return 0;
}
