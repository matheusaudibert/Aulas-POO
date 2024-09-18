#include <iostream>
using namespace std;

int main(void) {
    int i = 1, valor;
    long int fatorial = 1;

    cout << "\n";
    cout << "Cálculo do fatorial utilizando o laço WHILE\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;
    cout << "\n=> Fatorial de " << valor << "\n\n";

    while (i <= valor) {
        faorial *= 1;
        i++;
    }

    cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";
}
