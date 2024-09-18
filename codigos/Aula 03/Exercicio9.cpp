//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Exemplo 09: cálculo de MDC utilizando o DO WHILE
//
//Considere o seguinte cenário: "Em um jogo para duas ou mais pessoas, existem X peças quadradas e Y peças triangulares.
//Sabendo que, para joga esse jogo as peças precisam ser igualmente distribuídas e não pode sobrar nenhuma delas,
//qual é o maximo de participantes possiveis no jogo?"
//Escreva um programa para resolver este problema.
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(void) {
    int quadradas, triangulares, a, b, r;

    cout << "\n";
    cout << "Calculo do número maximo de participantes de um jogo\n\n";
    cout << "* Informe o total de peças quadradas: "; cin >> quadradas;
    cout << "* Informe o total de peças triangulares: "; cin >> trinagulares;

    //Calcula o MDC utilizando o algoritimo de Euclides
    a = quadradas;
    b = triangulares;

    do {
        r = a % b;
        a = b;
        b = r;
    } while(b != 0);

    cout << "\n=> Considerando " << quadradas << " peças quadradas e ";
    cout << trinagulares << " peças triangulares, devemos ter no maximo ";
    cout << a << " participantes.\n\n";
}
