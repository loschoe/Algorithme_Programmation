#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Entrer votre score sur 100 : ";
    cin >> x;

    if (x >= 80 && x <= 100) {
        cout << "Excellent" << endl;
    } else if (x >= 50 && x < 80) {
        cout << "Bien" << endl;
    } else if (x >= 30 && x < 50) {
        cout << "Moyen" << endl;
    } else if (x >= 0 && x < 30) {
        cout << "Insuffisant" << endl;
    } else {
        cout << "Score invalide !" << endl;
    }

    return 0;
}