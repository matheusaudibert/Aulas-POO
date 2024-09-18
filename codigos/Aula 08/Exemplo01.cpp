//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Exemplo 01: Programa que demonstra como declarar uma vari�vel ponteiro
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Fun��o Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Declara��o de vari�vel Ponteiro\n\n";

    //declara e inicializa uma vari�vel inteira
    int idade = 25;

    //declara um poteiro que aponta para a vari�vel <idade>
    int *idadePtr = &idade;

    //Exibe os valores
    cout << "1. Valor da vari�vel <idade>: " << idade << "\n";
    cout << "1. Endere�o da vari�vel <idade>: " << &idade << "\n\n";
    cout << "2. Valor da vari�vel <idadePtr>: " << idadePtr << "\n";
    cout << "2. Valor apontado pela vari�vel <*idadePtr>: " << *idadePtr << "\n\n";

    //Fim do programa
    return 0;

}
