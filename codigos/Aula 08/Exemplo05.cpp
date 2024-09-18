//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 05: Exemplo de uso de array nativo e ponteiro
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Prot�tipos das Fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void soma(int *resultado, const int *arrayPtr, const size_t tamanho);

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Fun��o Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo de Array Nativo e Ponteiro\n\n";

    //delara e inicializa um array de n�meros inteiros
    int numeros[] = {1, 5, 2, 9, 6, 7, 1, 4, 2, 0};

    //Obt�m o total de elementos do array
    size_t totalElementos = sizeof(numeros) / sizeof(numeros[0]);

    //declara um ponteiro para tipos inteiros
    int *numerosPtr = nullptr;

    //declara a vari�vel que armazena a soma dos elementos do array
    int resultado = 0;

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Exibe o total de elementos do array
    cout << "O array possui " << totalElementos << " elementos!\n\n";

    //Eibe os elementos do array
    cout << ">> N�meros: [";

    for(int i = 0; i < totalElementos; i++) {
        if(i < totalElementos - 1)
            cout << numeros[i] << ", ";
        else
            cout << numeros[i] << "]";
    }

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Aponta o ponteiro para o endere�o do primeiro elemento do array
    numerosPtr = &numeros[0];

    //Executa a fun��o que calcula a soma dos elementos do array
    soma(&resultado, numerosPtr, totalElementos);

    //Exibe o resultado da soma dos elementos do array
    cout << "\n\n";
    cout << ">> Soma: " << resultado << "\n\n";

    //Fim do programa
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Defini��o das fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Calcula a soma dos elementos do array
void soma(int *resultado, const int *arrayPtr, const size_t tamanho) {

    //loop para calcular a soma dos valores
    for(int i = 0; i < tamanho; i++) {
        *resultado += *arrayPtr++;
    }
}
