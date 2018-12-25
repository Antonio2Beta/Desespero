#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int operador1, operador2, resultado;
  char operando;
  cout << "Digite uma expressão do tipo 'operando operador operando'(ex:4+2): ";
  cin >> operador1 >> operando >> operador2;
  switch(operando){
    case '+':
      resultado = operador1 + operador2;
      break;
    case '-':
      resultado = operador1 - operador2;
      break;
    case '*':
      resultado = operador1 * operador2;
      break;
    case '/':
      resultado = operador1 / operador2;
      break;
    case '^':
      resultado = pow(operador1, operador2);
      break;
    default:
      cout << "Algo de errado não está certo, my consagrated =O" << endl;
  }
  cout << "O resultado da operação é: " << resultado << endl;
  return 0;
}
