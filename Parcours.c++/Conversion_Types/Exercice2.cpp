#include <iostream>
#include <string>

using namespace std;

int main() {
    int temp;
    cout << "Entrer une temperature en °C : ";
    cin >> temp;
    temp = (temp * 9/5) + 32;
    cout << "Temperature en °F" << temp << endl;

    return 0;
}
