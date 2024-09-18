//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 02: Programa que demonstra a mudan�a de valor de uma vari�vel atrav�s de uma vari�vel de ponteiro
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Fun��o Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    int idade = 25;
    int *idadePtr = &idade;

    //Exibe os valores da vari�vel <idade>, antes da altera��o
    cout << "1. Valor da vari�vel <idade>: " << idade << "\n";
    cout << "1. Endere�o da vari�vel <idade>: " << &idade << "\n\n";

    //Altera o valor da vari�vel <idade>, utilizando o ponteiro <idadePtr>
    *idadePtr = 30;

    //Exibe os valores da vari�vel <idade>, ap�s a altera��o
    cout << "2. Valor da vari�vel <idade>: " << idade << "\n";
    cout << "2. Endere�o da vari�vel <idade>: " << &idade << "\n\n";

    //Fim do programa
    return 0;

}
