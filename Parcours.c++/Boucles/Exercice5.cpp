#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Entrez le premier nombre : ";
    cin >> a;
    cout << "Entrez le deuxième nombre : ";
    cin >> b;

    bool diviseurCommun = false;

    for (int i = 2; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            diviseurCommun = true;
            cout << "Diviseur commun trouvé : " << i << endl;
        }
    }

    if (!diviseurCommun) {
        cout << "Pas de diviseur commun (autre que 1)." << endl;
    }

    return 0;
}