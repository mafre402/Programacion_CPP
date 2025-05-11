#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1; // Inicializamos en 1 (el factorial de 0 y 1 es 1)

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // Validación de entrada
    if (numero < 0) {
        cout << "Error: El factorial no esta definido para numeros negativos.";
        return 1; // Salir del programa con código de error
    }

    // Calcular factorial con for
    for (int i = 1; i <= numero; i++) {
        factorial *= i; // Equivalente a: factorial = factorial * i
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
