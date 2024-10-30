#include <iostream>
void main()

{
	using namespace std;
	char op;
	int  n1,n2;
	cout << "Queres somar(+), Dividir(/), Subtrair(-), Multiplicar(x)";
	cin >> op;
	cout << "Primeiro numero?";
	cin >> n1;
	cout << "segundo numero?";
	cin >> n2;

	switch (op) {
	case '+':
		cout << "O resultado e" << n1 + n2;
		break;
	case'/':
		cout << "O resultado e " << n1 / n2;
		break;
	case '-':
		cout << "O resultado e" << n1 - n2;
		break;
	case 'x':
		cout << "O resultado e " << n1 * n2;
		break;
	}
}