#include <iostream>
void main()
{
	using namespace std;
	int n1[10], n2[10], i,n3[20],pos=0,maior=-20, posicao = -32;
	for (i = 0; i < 10; i++)
	{
		cout << "Diz me o teu " << i + 1 << " numero";
		cin >> n1[i];
	}
	for (i = 0; i < 10; i++)
	{
		cout << "Diz me o teu " << i + 1 << " numero(para o segundo vetor)";
		cin >> n2[i];
	}
	for (i = 0; i < 20; i++)
	{
		n3[i] = n1[pos];
		i = i + 1;
		n3[i] = n2[pos];
		pos = pos + 1;
	}
	for (i = 0; i < 20; i++) {
		cout << n3[i];
    }
		for (i = 0; i < 20; i++) 
		{
			if (n3[i] > maior)
			{
				maior = n3[i];
				posicao = i;
			}
		}
		cout <<" e o maior numero seria "<<maior<<" e a posicao "<<posicao;
}