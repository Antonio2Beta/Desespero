#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int n_alunos;
	double media=0.0, variancia=0.0;
	cout << "Digite o número de alunos: ";
	cin >> n_alunos;
	double notas[n_alunos];
	for(int i=0;i<n_alunos;i++){
		cout << "Digite a nota do " << (i+1) <<" aluno: ";
		cin >> notas[i];
		media +=notas[i];
	}
	media /= n_alunos;
	// Cálculo do desvio padrão
	for (int i=0;i<n_alunos;i++)
		variancia+=pow(notas[i]-media,2);
	variancia /= n_alunos;
	desviopadrao=sqrt(variancia);
	cout << fixed << setprecision(1);
	cout << "A média dos alunos foi de: " << media << ". Com um desvio padrão de: " << desviopadrao << endl;
	
	return 0;
}
