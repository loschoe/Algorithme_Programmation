#include <iostream>
#include <string>

using namespace std;

int main(){
    string texte;
    int nb_ch;
    cout << "Quelle est ta phrase : " << endl;
    getline(cin, texte);


    for (size_t i=0; i < texte.length(); i++) {
        nb_ch += 1;
    }
    cout << "Nombre de caracteres dans la phrase : " << nb_ch << endl;
    return 0;
}