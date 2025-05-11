#include <iostream>
#include <string> // Para usar string
#include <cctype> // Para isupper() e islower()
using namespace std;

int main() {
    string frase;
    int mayusculas = 0, minusculas = 0;

    cout << "Ingrese una frase: ";
    getline(cin, frase); // Lee toda la línea incluyendo espacios

    for (int i = 0; i < frase.length(); i++) {
        char c = frase[i];
        if (isupper(c)) {      // Verifica si es mayúscula
            mayusculas++;
        } else if (islower(c)) { // Verifica si es minúscula
            minusculas++;
        }
        // Ignora números, símbolos y espacios
    }

    cout << "\nResultados:\n";
    cout << "Mayúsculas: " << mayusculas << "\n";
    cout << "Minúsculas: " << minusculas << "\n";
    cout << "Total de letras: " << mayusculas + minusculas << endl;

    return 0;
}
