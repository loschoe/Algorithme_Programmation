#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    int y;
    cout << "Entrer un nombre : ";
    cin >> x;
    cout << "Entrer un nombre : " << endl;
    cin >> y;
    if (x > y){
        cout << "x est plus grand que y" << endl;
    } else {
        cout << "y est plus grand que x" << endl;
    }
    return 0;   
}
