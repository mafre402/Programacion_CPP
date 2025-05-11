#include <iostream>
#include <string> // Para usar string
#include <cctype> // Para isupper() e islower()
using namespace std;

int main() {
    string frase;
    int mayusculas = 0, minusculas = 0;

    cout << "Ingrese una frase: ";
    getline(cin, frase); // Lee toda la l�nea incluyendo espacios

    for (int i = 0; i < frase.length(); i++) {
        char c = frase[i];
        if (isupper(c)) {      // Verifica si es may�scula
            mayusculas++;
        } else if (islower(c)) { // Verifica si es min�scula
            minusculas++;
        }
        // Ignora n�meros, s�mbolos y espacios
    }

    cout << "\nResultados:\n";
    cout << "May�sculas: " << mayusculas << "\n";
    cout << "Min�sculas: " << minusculas << "\n";
    cout << "Total de letras: " << mayusculas + minusculas << endl;

    return 0;
}
