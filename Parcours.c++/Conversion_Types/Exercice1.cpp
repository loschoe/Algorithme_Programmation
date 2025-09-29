#include <iostream>
#include <string>
using namespace std;

int main(){
    string nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;
    
    int n = stoi(nombre);
    cout << n*2 << endl;
    return 0;
}