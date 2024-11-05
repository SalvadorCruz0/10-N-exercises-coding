#include <iostream>
void main()
{
	using namespace std;
	int fatias, pessoas,sobras;
	cout << "Quantas fatias de bolo exite?";
	cin >> fatias;
	cout << "Quantas pessoas existe ai na festa ?";
	cin >> pessoas;
	cout << "Sao distribuidas" << fatias / pessoas  << "por pess0oa";
	cout << "Sobra " << fatias % pessoas;
}