#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un n�mero entero positivo: ";
    cin >> numero;

    cout << "\nCuenta regresiva:\n";
    for(int i = numero; i >= 0; i--) {
        cout << i << endl;
    }

    return 0;
}
