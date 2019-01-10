#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c,delta,x1,x2;
	cout << "Digite os valores de a, b e c:";
	cin >> a >> b >> c;
	delta = (b*b)-(4*a*c);
	cout << fixed << setprecision(2);
	if (delta<0)
		cout << "A equação não possui raizezinhas! =O" << endl;
	else
		if (delta==0){
		cout << "A equação possui apenas uma raíz" << endl;
			x1=-b/(2*a);
		cout << "A raíz encontrada foi" << x1 << endl;}
		else{
		cout << "A equação possui duas raízes" << endl;
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
		cout << "As raízes encontradas foram " << x1 << " e " << x2 << endl;}
	return 0;
}

