#include <iostream>
#include <cstdlib>   // pour rand() et srand()
#include <ctime>     // pour time()

using namespace std;

int main() {
    int compteur = 0;
    srand(time(0));              // Initialiser le générateur avec l'heure actuelle
    int nombre = rand() % 100 + 1;  // Générer un nombre entre 1 et 100

    int nb_user;
    while (true) {
        cout << "Devinez le nombre (entre 1 et 100) : ";
        cin >> nb_user;

        if (nb_user == nombre) {
            cout << "Bravo, vous avez trouvé en " << compteur + 1 << " tentative(s) !" << endl;
            break;
        } else if (nb_user < nombre) {
            cout << "C'est plus." << endl;
        } else if (nb_user > nombre) {
            cout << "C'est moins." << endl;
        }

        compteur++;
    }

    return 0;
}