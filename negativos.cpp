#include <iostream>
#include <string>
#include <locale.h>

void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int arraizinho[10], i, mambo, contador = 0, somatorio = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "Diz o " << i + 1 << "� numero\n";
		cin >> arraizinho[i];
	}
	cout << "Queres contar negativos(1) ou somar negativos?(2)\n";
	cin >> mambo;
	switch (mambo)
	{
	case 1:
		for (i = 0; i < 10; i++)
		{
			if (arraizinho[i] < 0)
			{
				contador = contador + 1;
			}
		}
		cout << "Inseriste " << contador << " n�meros negativos";
		break;
	case 2:

		for (i = 0; i < 10; i++)
		{
			if (arraizinho[i] < 0)
			{
				somatorio = somatorio + arraizinho[i];
			}
		}
		cout << "O somat�rio de todos os negativos �: " << somatorio << "!!!!";
		break;
	default:
		break;
	}
}
