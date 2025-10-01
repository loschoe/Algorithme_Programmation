#include <iostream>
#include <string>

using namespace std;

int main(){
    str name;
    cout << "Quel est ton nom : " << endl;
    cin >> name;

    for (size_t i=0; i < name.length(); i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            texte[i] = texte[i] - ('a'-'A');
        }
    }
    cout << "Nom en majuscule : " << name << endl;
    return 0;
}