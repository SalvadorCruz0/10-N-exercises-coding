#include <iostream>
void main() {
    using namespace std;
    int no, i;
    do {
        cout << "Diz-me um numero (entre 0 e 100): ";
        cin >> no;
    } while (no < 0 || no > 100);

    for (i = no; i >= 1; i--) {
        if (i % 2 != 0) {
            cout << i << "\n";
        }
    }
}





