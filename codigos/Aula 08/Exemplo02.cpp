//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 02: Programa que demonstra a mudança de valor de uma variável através de uma variável de ponteiro
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Função Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    int idade = 25;
    int *idadePtr = &idade;

    //Exibe os valores da variável <idade>, antes da alteração
    cout << "1. Valor da variável <idade>: " << idade << "\n";
    cout << "1. Endereço da variável <idade>: " << &idade << "\n\n";

    //Altera o valor da variável <idade>, utilizando o ponteiro <idadePtr>
    *idadePtr = 30;

    //Exibe os valores da variável <idade>, após a alteração
    cout << "2. Valor da variável <idade>: " << idade << "\n";
    cout << "2. Endereço da variável <idade>: " << &idade << "\n\n";

    //Fim do programa
    return 0;

}
