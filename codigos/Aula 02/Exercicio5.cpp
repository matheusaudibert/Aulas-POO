#include <iostream>
using namespace std;

int main(void) {

    //Declaração de variaveis
    int mes;

    //Entrada de dados
    cout << "\n";
    cout << "Estrutura de controle com múltipla escolha\n\n";
    cout << "* Informe o número equivalente ao mês desejado: "; cin >> mes;

    //verifica a quantidade de dias do mês
    switch (mes){

        //Meses com 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "\n=> O mês " << mes << " possui 31 dias.";
            break;

        //meses com 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "\n=> O mês " << mes << " possui 30 dias.";

        //meses com 28 dias
        case 2:
            cout << "\n=> O mês " << mes << " possui 28 dias.";
        default: cout << "\n=> O mês " << mes << " não existe";
    }

    cout << "\n\n";
}
