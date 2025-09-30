#include <iostream>
using namespace std;

int main() {
    int total_secondes
    cout << "Entrez un nombre de secondes : ";
    cin >> total_secondes;

    int heures = total_secondes / 3600;
    int minutes = (total_secondes % 3600) / 60;
    int secondes = total_secondes % 60;

    cout << total_secondes << "secondes = ";
    cout << heures << "h, " << minutes << "minute(s) et " << secondes << " seconde(s)." << endl;

    return 0;
}