// Ajouter le code !!
#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 12;
    int b = 32;
    cout << a << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;

    return 0;
}
