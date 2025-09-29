#include <iostream>
#include <string>
using namespace std;

int main(){
    string nom;
    string prenom;

    cout << "Last name : ";
    cin >> nom;

    cout << "First name : ";
    cin >> prenom;
    
    cout << "Nom complet :" << nom + " " + prenom << endl;
    return 0;
}