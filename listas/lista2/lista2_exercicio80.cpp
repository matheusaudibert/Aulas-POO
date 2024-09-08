#include <iostream>
using namespace std;

int inverterNumero(int num) {
    int reverso = 0;
    
    while (num > 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }
    
    return reverso;
}

int main() {
    int numero;
    
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    
    int reverso = inverterNumero(numero);
    
    cout << "O reverso de " << numero << " é " << reverso << "." << endl;
    
    return 0;
}
