#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const double t_aluno=30.0, t_professor=70.0, t_prozao=100.0, t_minicurso=20.0;
	const double t_debito=0.0199, t_credito=0.0498;
	const int op_aluno=1, op_professor=2, op_prozao=3;
	const int pag_boleto=1, pag_debito=2, pag_credito=3;
	char minicurso;
	int t_inscricao, form_pag;
	double v_total;
	cout << "O que você é: \n 1- Aluno\n 2- Professor\n 3- Profissional\n";
	cin >> t_inscricao;
	switch(t_inscricao){
		case op_aluno:
			v_total = t_aluno;
			break;
		case op_professor:
			v_total = t_professor;
		case op_prozao:
			v_total = t_prozao;
			break;
		default:
			cout << "Opção inválida, my consagrated =/\n";
			return -1;
	}
	cout << "O participante faz minicurso? ";
	cin >> minicurso;
	switch(minicurso){
		case 'S':
		case 's':
			v_total += t_minicurso;
			break;
		case 'N':
		case 'n':
			break;
		default:
			cout << "Invalid option, meu consagrado =/";
			return -1;
	}
	cout << "Qual será a forma de pagamento? ";
	cout << "\n 1- Boleto\n 2- Débito\n 3- Crédito\n";
	cin >> form_pag;
	switch(form_pag){
		case pag_boleto:
			break;
		case pag_debito:
			v_total = v_total + (v_total*t_debito);
			break;
		case pag_credito:
			v_total = v_total + (v_total*t_credito);
			break;
		default:
			cout << "Invalid Opção, my consagrado =/";
			return -1;
	}
	cout << fixed << setprecision(2);
	cout << "A facada final será de: " << v_total <<". Gostou, mio consagratio? =D" << endl;

	return 0;
}
