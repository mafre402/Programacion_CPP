#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;

int main() {
    const float PESOS_POR_DOLAR = 20.5f;  // Ejemplo: 1 USD = 20.5 MXN
    const float EUROS_POR_DOLAR = 0.93f;   // 1 USD = 0.93 EUR
    const float YENES_POR_DOLAR = 148.5f;  // 1 USD = 148.5 JPY

    float dolares;
    int opcion;
    char repetir;

    do {
        cout << "\n=== CONVERSOR DE DIVISAS ===";
        cout << "\n1. Dólares a Pesos Mexicanos (MXN)";
        cout << "\n2. Dólares a Euros (EUR)";
        cout << "\n3. Dólares a Yenes Japoneses (JPY)";
        cout << "\n4. Salir";
        cout << "\nIngrese una opción (1-4): ";
        cin >> opcion;

        if (opcion != 4) {
            cout << "Ingrese la cantidad en dólares: $";
            cin >> dolares;
        }

        cout << fixed << setprecision(2); // Formato con 2 decimales

        switch(opcion) {
            case 1:
                cout << "$" << dolares << " USD = $"
                     << dolares * PESOS_POR_DOLAR << " MXN\n";
                break;
            case 2:
                cout << "$" << dolares << " USD = €"
                     << dolares * EUROS_POR_DOLAR << " EUR\n";
                break;
            case 3:
                cout << "$" << dolares << " USD = ¥"
                     << dolares * YENES_POR_DOLAR << " JPY\n";
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }

        if (opcion != 4) {
            cout << "¿Desea otra conversión? (s/n): ";
            cin >> repetir;
        }
    } while (opcion != 4 && (repetir == 's' || repetir == 'S'));

    return 0;
}
