#include <iostream>

using namespace std;

// Função que usa ponteiros para modificar o valor de uma variável
void increment(int* ptr) {
    (*ptr)++; // Incrementa o valor da variável apontada
}

int main() {
    // 1. Declaração e uso básico de ponteiros
    int var = 42;
    int* ptr = &var; // Ponteiro armazenando o endereço de var

    cout << "Valor de var: " << var << endl;
    cout << "Endereço de var (armazenado em ptr): " << ptr << endl;
    cout << "Valor acessado via ptr: " << *ptr << endl;

    // 2. Modificando o valor de var via ponteiro
    *ptr = 21;
    cout << "Novo valor de var (modificado via ptr): " << var << endl;

    // 3. Usando ponteiros com arrays
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptrArr = arr; // Ponteiro para o primeiro elemento do array
    cout << "Primeiro elemento do array: " << *ptrArr << endl;
    cout << "Segundo elemento do array (via aritmética de ponteiros): " << *(ptrArr + 1) << endl;

    // 4. Ponteiro para ponteiro
    int** ptrPtr = &ptr; // Ponteiro para o ponteiro ptr
    cout << "Valor de var via ponteiro para ponteiro: " << **ptrPtr << endl;

    // 5. Passagem de ponteiros para funções
    increment(&var); // Passa o endereço de var para a função
    cout << "Valor de var após incremento via função: " << var << endl;

    // 6. Alocação dinâmica de memória
    int* dynamicPtr = new int(100); // Aloca memória para um inteiro e atribui valor
    cout << "Valor da memória alocada dinamicamente: " << *dynamicPtr << endl;
    delete dynamicPtr; // Libera a memória alocada

    // 7. Alocação dinâmica para arrays
    int* dynamicArr = new int[5]; // Aloca um array de 5 inteiros
    for (int i = 0; i < 5; i++) {
        dynamicArr[i] = (i + 1) * 10; // Inicializa o array
    }
    cout << "Array alocado dinamicamente: ";
    for (int i = 0; i < 5; i++) {
        cout << dynamicArr[i] << " ";
    }
    cout << endl;
    delete[] dynamicArr; // Libera a memória alocada para o array

    return 0;
}
