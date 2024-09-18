//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Exemplo 04: Exemplo de array de strings
//
//Demonstra como ordenar um array de strings utilizando Quick Sort
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Total de nomes
#define TAM 10

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Protótipos de Função
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void trocar(string& a, string& b);
int particao(string dados[], int menor, int maior);
void quickSort(string dados[], int menor, int maior);

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Função Principal
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo: Quick Sort\n\n";

    //variaveis de controle de saída int i;
    int i;

    //Declara um array para armazenar os nomes
    string nomes[TAM];

    //Loop que realiza a entrada dos nomes
    for(i = 0; i < TAM; i++) {
        cout << "Informe o nome " << i+1 << ": ";
        getline(cin, nomes[i]);
    }

    cout << "\n";

    //imprimindo os nomes antes da ordenação
    cout << "Nomes antes da ordenação:\n\n";

    i = 1;
    for(const auto& nome : nomes) {
        cout << setw(2) << i << "." << nome << endl;
        i++;
    }

    //Ordena os nomes utilizando o Quick Sort
    quickSort(nomes, 0, TAM - 1);

    cout << "\n";

    //Imprimindo nomes depois da ordenação
    cout << "Nomes depois da ordenação:\n\n";

    i = 1;
    for (const auto& nome : nomes) {
        cout << setw(2) << i << ". " << nome << endl;
        i++;
    }

    cout << "n";
    //Fim do programa
    return 0;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Funções
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Função para trocar o valor de duas strings
void trocar(string& a, string& b) {

    string temp = a;
    a = b;
    b = temp;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Função de partição, que coloca o pivô no lugar correto e organiza os
//elementos menores que o pivô à esquerda e os maiores à direita
int particao(string dados[], int menor, int maior) {

    //Escolhe o último elemento para ser o pivô
    string pivo = dados[maior];

    //Índice do último elemento cujo valor é menor do que o pivô
    int i = menor - 1;

    //Loop para organizar os elementos em relação ao pivô
    for(int j = menor; j < maior; j++) {

        //move todos os elementos menores que o pivô para a
        //parte esquerda do array de strings
        if(dados[j] < pivo) {
            i++;
            trocar(dados[i], dados[j]);
        }
    }

    //depois que o loop termina, todos os elementos menores que
    //o pivô estão a esquerda e todos os elementos maiores estão à direita
    //porém, o pivô ainda está na última posição (maior).
    //Assim, trocamos o pivô com o elemento na posição i + 1,
    //para colocá-lo na posição correta
    trocar(dados[i + 1], dados[maior]);

    //Retorna o índice do pivô, em sua posição correta dentro array
    return i + 1;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Função Quick Sort
void quickSort(string dados[], int menor, int maior) {

    //Verifica se o array possui ao menos um elemento
    if(menor < maior) {

        //Divide o array de strings em dois e retorna o índice da partição
        int pivo = particao(dados, menor, maior);

        //ordena os elementos dentro dos arrays antes e depois da partição
        quickSort(dados, menor, pivo - 1);
        quickSort(dados, pivo + 1, maior);
    }

}
