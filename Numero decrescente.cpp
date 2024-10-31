#include <iostream>
void main()
{
	using namespace std;
	int n1;
	cout << "Diz me um numero";
	cin >> n1;
	
	for (int i = n1; i >= 0; --i) {
		cout << i <<"\n";
	}
}