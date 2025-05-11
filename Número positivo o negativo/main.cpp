#include <iostream>
using namespace std;

int main() {
    float numero;

    cout << "Analizador de numeros (0 para terminar)\n";

    while(true) {
        cout << "\nIngrese un numero: ";
        cin >> numero;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida!";
            continue;
        }

        if(numero == 0) {
            cout << "Saliendo del programa...";
            break;
        }

        cout << numero << " es " << ((numero > 0) ? "POSITIVO" : "NEGATIVO");
    }

    return 0;
}
