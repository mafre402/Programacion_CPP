#include <iostream>
using namespace std;

int main() {
    cout << "M�ltiplos de 3 entre 1 y 100:\n";

    // Versi�n con for + %
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {  // Si el residuo de i/3 es 0
            cout << i << " ";
        }
    }

    cout << "\n";
    return 0;
}
