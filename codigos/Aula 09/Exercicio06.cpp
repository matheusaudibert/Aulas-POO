//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 06: exemplo de aritimética de ponteiros
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Função Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo de Aritimética de Ponteiro\n\n";

    //Declaração e inicialização de um array de inteiros
    int numeros[] = {2, 5, 10, 1, 3, 21};

    //Declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr = numeros;

    cout << "1. Valor apontado por <ptr>: " << *ptr << endl;

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Incrementa uma posição
    ptr++;

    cout << "2. Valor apontado por <ptr>" << *ptr << endl;

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Adição de inteiro
    ptr = ptr + 3;

    cout << "3. Valor apontado por <ptr>:" << *ptr << endl;

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Decrementa uma posição
    ptr--;

    cout << "4. Valor apontado por <ptr>: " << *ptr << endl;

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr1 = &numeros[0];

    //Declara o ponteiro e aponta para o quinto elemento do array
    int *ptr2 = &numeros[4];

    cout << "5. Valor apontado por <ptr1>: " << *ptr1 << endl;
    cout << "6. Valor apontado por <ptr2>: " << *ptr2 << endl;

    //Calcula o total de elementos entre os ponteiros
    int total = ptr2 - ptr1;

    cout << "7. Total de elementos entre <ptr1> e <ptr2>: " << total << endl;

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //verifica a posição do elemento apontado pelos ponteiros
    if(ptr1 > ptr2) {
        cout << "8. <ptr1> aponta para um elemento mais à frente no array." << endl;
    } else {
        cout << "8. <ptr2> aponta para um elemento mais à frente do array." << endl;
    }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr3 = numeros;

    //Acessa o segundo elemento
    int segundoElemento = *(ptr3 + 1);

    cout << "9. Segundo elemento do array: " << segundoElemento <, endl;

    cout << "\n";

    //Fim do programa
    return 0;

}
