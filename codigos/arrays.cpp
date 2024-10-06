#include <iostream>
using namespace std;

// Função que modifica o array (passagem por referência automática)
void modificarArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arr[i] *= 2; // Multiplica cada elemento por 2
    }
}

int main() {
    // 1. Declaração e Inicialização de Arrays
    int numeros[5] = {10, 20, 30, 40, 50}; // Declara e inicializa um array de 5 inteiros
    
    // Acesso aos elementos do array
    cout << "Elemento no indice 0: " << numeros[0] << endl;
    cout << "Elemento no indice 1: " << numeros[1] << endl;

    // 2. Modificando elementos do array
    numeros[1] = 25; // Modifica o segundo elemento
    cout << "Elemento no indice 1 modificado: " << numeros[1] << endl;

    // 3. Iterando sobre o array com um loop
    cout << "Iterando sobre o array: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": " << numeros[i] << endl;
    }

    // 4. Arrays multidimensionais (matriz 3x3)
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Acessando elementos da matriz
    cout << "Elemento na linha 2, coluna 3: " << matriz[1][2] << endl; // Exibe 6

    // Iterando sobre a matriz
    cout << "Matriz 3x3: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // 5. Arrays de caracteres (strings)
    char palavra[] = "Hello"; // String inicializada automaticamente com '\0'
    cout << "Palavra: " << palavra << endl;

    // 6. Passagem de arrays para funções
    int arr[5] = {1, 2, 3, 4, 5};
    modificarArray(arr, 5); // A função dobra os valores do array

    cout << "Array modificado: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
