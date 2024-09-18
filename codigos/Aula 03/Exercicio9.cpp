//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Exemplo 09: c�lculo de MDC utilizando o DO WHILE
//
//Considere o seguinte cen�rio: "Em um jogo para duas ou mais pessoas, existem X pe�as quadradas e Y pe�as triangulares.
//Sabendo que, para joga esse jogo as pe�as precisam ser igualmente distribu�das e n�o pode sobrar nenhuma delas,
//qual � o maximo de participantes possiveis no jogo?"
//Escreva um programa para resolver este problema.
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(void) {
    int quadradas, triangulares, a, b, r;

    cout << "\n";
    cout << "Calculo do n�mero maximo de participantes de um jogo\n\n";
    cout << "* Informe o total de pe�as quadradas: "; cin >> quadradas;
    cout << "* Informe o total de pe�as triangulares: "; cin >> trinagulares;

    //Calcula o MDC utilizando o algoritimo de Euclides
    a = quadradas;
    b = triangulares;

    do {
        r = a % b;
        a = b;
        b = r;
    } while(b != 0);

    cout << "\n=> Considerando " << quadradas << " pe�as quadradas e ";
    cout << trinagulares << " pe�as triangulares, devemos ter no maximo ";
    cout << a << " participantes.\n\n";
}
