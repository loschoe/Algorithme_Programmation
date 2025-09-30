#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez un nombre entier positif : ";
    cin >> n;

    int somme = 0;
    for (int i = 1; i <= n; i++) {
        somme += i;
    }

    cout << "La somme des " << n << " premiers entiers naturels est : " << somme << endl;
    return 0;
}
