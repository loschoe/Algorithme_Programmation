#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Entrer un nombre : ";
    cin >> x;
    if (x == 0){
        cout << "x est nul" << endl;
    }
    else if (x < 0){
        cout << "x est négatif" << endl;
    } else {
        cout << "x est positif" << endl;
    }
    return 0;   
}