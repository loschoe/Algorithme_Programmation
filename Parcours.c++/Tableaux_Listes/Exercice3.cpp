#include <iostream>
using namespace std;

int main() {
    string tab[3] {"Luc", "Max", ""};
    string name_user;

    cout << "C'est quoi ton nom : ";
    cin >> name_user;
    tab[2] = name_user;

    cout << "Les noms dans la liste sont : " << endl;
    for(int i = 0; i < 3; i++) {
        cout << tab[i] << endl;
    }
    return 0;
}