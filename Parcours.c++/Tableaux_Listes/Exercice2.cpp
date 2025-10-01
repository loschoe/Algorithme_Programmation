#include <iostream>
using namespace std;

int main() {
    int tab[5];
    int nombre;
    for(int i = 0; i < 5; i++) {
        cout << "Donne un nombre :" << endl;
        cin >> nombre;
        tab[i] = nombre
    }
    cout << "Les nombres saisis sont : ";
    for(int i = 0; i < 5; i++) {
        cout << tab[i] << endl;
    }
    return 0;
}