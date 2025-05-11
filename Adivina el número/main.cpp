#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

int main() {
    // Inicializar semilla para n�meros aleatorios
    srand(time(0));

    // Generar n�mero aleatorio entre 1 y 100
    int numeroSecreto = rand() % 100 + 1;
    int intento;
    int intentos = 0;
    bool adivinado = false;

    cout << "�Adivina el n�mero secreto (entre 1 y 100)!\n";

    while (!adivinado) {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        intentos++;

        if (cin.fail()) { // Validar entrada
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Por favor ingresa un n�mero v�lido.\n";
            continue;
        }

        if (intento < 1 || intento > 100) {
            cout << "El n�mero debe estar entre 1 y 100.\n";
        } else if (intento < numeroSecreto) {
            cout << "El n�mero secreto es MAYOR.\n";
        } else if (intento > numeroSecreto) {
            cout << "El n�mero secreto es MENOR.\n";
        } else {
            adivinado = true;
            cout << "�Felicidades! Adivinaste el n�mero en "
                 << intentos << " intentos.\n";
        }
    }

    return 0;
}
