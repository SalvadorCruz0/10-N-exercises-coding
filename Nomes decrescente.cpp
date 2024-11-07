#include <iostream>
#include <string>
void main()
{
	using namespace std;
	int i;
	char op = 's';
	string nomes[5];
	do {
		for (i = 0; i < 5; i++) {
			cout << "Diz me o " << i + 1 << "nome\n";
			cin >> nomes[i];
		}
		for (i = 4; i >= 0; i--) {
			cout << nomes[i] << "\n";
		}
		cout << "Queres sair clica (s),queres continuar clica (n)";
		cin >> op;
	} while (op == 'n');
}