#include <iostream>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Portuguese");
	using namespace std;
	char Tipo;
	int C, F;
	float valor;
	cout << "Que tipo de temperatura queres?";
	cin >> Tipo;
	switch (Tipo) {
	case'c':
	case'C':
		cout << "Quantos celcius queres converter?";
		cin >> C;
		valor = C * 1.8 + 32;
		cout << "O valor em Celcius é: " << C << " e do Fahrenheit é de " << valor;
		break;
	case'f':
	case'F':
		cout << "Quantos Fahrenheit queres converter?";
		cin >> F;
		valor = (F - 32) * 5 / 9;
		cout << "O valor de Fahrenheit é:" << C << " e de Celcius é de " << valor;
		break;
	default:
		cout << "Esquezito, era com F ou C!!";
		break;
	}
}