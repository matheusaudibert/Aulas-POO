#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    int contador{0}, valor, resultado;

    cout << "\n";
    cout << "laço de repetição com condição inicial\n\n";
    cout << "* Informe o valor desejado: "; cin >> valor;
    cout << "\n=> Tabuada do " << valor << "\n\n";

    while (contador <= 10) {
        resultado = valor * contador;

        cout << setw(2) <<, valor;
        cout << " X ";
        cout << setw(2) << contador;
        cout << " = ";
        cout << setw(2) <, resultado << "\n";
    }
}
