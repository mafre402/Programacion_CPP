#include <iostream>
using namespace std;

int main() {
    const int TOTAL_NOTAS = 5;
    float notas[TOTAL_NOTAS];
    float suma = 0;

    cout << "Ingrese 5 notas (entre 0.0 y 10.0):\n";

    for (int i = 0; i < TOTAL_NOTAS; i++) {
        do {
            cout << "Nota " << (i + 1) << ": ";
            cin >> notas[i];

            if (cin.fail() || notas[i] < 0 || notas[i] > 10) {
                cin.clear(); // Limpia el estado de error
                cin.ignore(1000, '\n'); // Descarta la entrada incorrecta
                cout << "Error: Ingrese un valor entre 0.0 y 10.0\n";
            } else {
                break;
            }
        } while (true);

        suma += notas[i];
    }

    float promedio = suma / TOTAL_NOTAS;
    cout.precision(2); // Mostrar 2 decimales
    cout << fixed << "\nEl promedio es: " << promedio;

    return 0;
}
