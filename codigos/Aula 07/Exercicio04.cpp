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
//Prot�tipos de Fun��o
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void trocar(string& a, string& b);
int particao(string dados[], int menor, int maior);
void quickSort(string dados[], int menor, int maior);

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Fun��o Principal
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo: Quick Sort\n\n";

    //variaveis de controle de sa�da int i;
    int i;

    //Declara um array para armazenar os nomes
    string nomes[TAM];

    //Loop que realiza a entrada dos nomes
    for(i = 0; i < TAM; i++) {
        cout << "Informe o nome " << i+1 << ": ";
        getline(cin, nomes[i]);
    }

    cout << "\n";

    //imprimindo os nomes antes da ordena��o
    cout << "Nomes antes da ordena��o:\n\n";

    i = 1;
    for(const auto& nome : nomes) {
        cout << setw(2) << i << "." << nome << endl;
        i++;
    }

    //Ordena os nomes utilizando o Quick Sort
    quickSort(nomes, 0, TAM - 1);

    cout << "\n";

    //Imprimindo nomes depois da ordena��o
    cout << "Nomes depois da ordena��o:\n\n";

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
//Fun��es
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Fun��o para trocar o valor de duas strings
void trocar(string& a, string& b) {

    string temp = a;
    a = b;
    b = temp;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Fun��o de parti��o, que coloca o piv� no lugar correto e organiza os
//elementos menores que o piv� � esquerda e os maiores � direita
int particao(string dados[], int menor, int maior) {

    //Escolhe o �ltimo elemento para ser o piv�
    string pivo = dados[maior];

    //�ndice do �ltimo elemento cujo valor � menor do que o piv�
    int i = menor - 1;

    //Loop para organizar os elementos em rela��o ao piv�
    for(int j = menor; j < maior; j++) {

        //move todos os elementos menores que o piv� para a
        //parte esquerda do array de strings
        if(dados[j] < pivo) {
            i++;
            trocar(dados[i], dados[j]);
        }
    }

    //depois que o loop termina, todos os elementos menores que
    //o piv� est�o a esquerda e todos os elementos maiores est�o � direita
    //por�m, o piv� ainda est� na �ltima posi��o (maior).
    //Assim, trocamos o piv� com o elemento na posi��o i + 1,
    //para coloc�-lo na posi��o correta
    trocar(dados[i + 1], dados[maior]);

    //Retorna o �ndice do piv�, em sua posi��o correta dentro array
    return i + 1;

}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Fun��o Quick Sort
void quickSort(string dados[], int menor, int maior) {

    //Verifica se o array possui ao menos um elemento
    if(menor < maior) {

        //Divide o array de strings em dois e retorna o �ndice da parti��o
        int pivo = particao(dados, menor, maior);

        //ordena os elementos dentro dos arrays antes e depois da parti��o
        quickSort(dados, menor, pivo - 1);
        quickSort(dados, pivo + 1, maior);
    }

}
