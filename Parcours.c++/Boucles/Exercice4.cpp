#include <iostream>
using namespace std;

int main() {
    int result;
    int value = 0; 
    for (int i = 0; i < 11; i++){
        result = value*7;
        cout << "7 x" << value << "=" << result << endl;
        value += 1;
    }
    return 0;
}