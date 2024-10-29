#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void main()
{
	srand(time(0));
	int randomNum = rand() % 101, coisa;
	cout <<"Diz me um numero";
	cin >> coisa;
	do {
		if (coisa > randomNum)
		{
			cout << "O numero e menor";
			cin >> coisa;
		}
		 else if (coisa < randomNum)
		{
			cout << "O numero e maior";
			cin >> coisa;
		}
	} while (coisa != randomNum);
	cout << "O numero e esse :D";
	cin >> coisa;
}






















