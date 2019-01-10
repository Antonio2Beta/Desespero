#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	const int tamConjunto1=5, tamConjunto2=7;
	array <int, tamConjunto1> conjunto1;
	for (size_t i=0;i<conjunto1.size();i++){
		cout << "Digite o " << i+1 << " elemento do primeiro conjunto: ";
		cin >> conjunto1[i];
	}
	sort(conjunto1.begin(), conjunto1.end());
	cout << "Conjunto 1 ordenado: ";
	for (int item:conjunto1)
		cout << item << " ";
	cout << endl;
	array <int, tamConjunto2> conjunto2;
	for (size_t i=0;i<conjunto2.size();i++){
		cout << "Digite o " << i+1 << " elemento do segundo conjunto: ";
		cin >> conjunto2[i];
	}
	sort(conjunto2.begin(), conjunto2.end());
	cout << "Conjunto 2 ordenado: ";
	for (int item:conjunto2)
		cout << item << " ";
	cout << endl;
	array <int, 12> uniao;
	set_union(conjunto1.begin(),conjunto1.end(), conjunto2.begin(), conjunto2.end(),
	uniao.begin());
	cout << "União dos conjuntos: ";
	for (int item:uniao)
		cout << item << " ";
	cout << endl;
	
	array <int, 12> intersecao;
	set_intersection(conjunto1.begin(),conjunto1.end(),conjunto2.begin(),conjunto2.end(),
	intersecao.begin());
	cout << "Intersecção dos conjuntos: ";
	for (int item:intersecao)
		cout << item << " ";
	cout << endl;
	return 0;
}
