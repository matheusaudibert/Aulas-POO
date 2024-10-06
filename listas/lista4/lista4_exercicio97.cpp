#include <iostream>
using namespace std;

// funcao para converter o formato de 24h para 12h
void converterPara12h(int horas24, int minutos, int &horas12, string &periodo) {
    if (horas24 == 0) {
        horas12 = 12;
        periodo = "AM";
    } else if (horas24 == 12) {
        horas12 = 12;
        periodo = "PM";
    } else if (horas24 > 12) {
        horas12 = horas24 - 12;
        periodo = "PM";
    } else {
        horas12 = horas24;
        periodo = "AM";
    }
}

// funcao para exibir o resultado
void exibirResultado(int horas12, int minutos, const string &periodo) {
    cout << "Horario no formato de 12 horas: " << horas12 << ":";
    if (minutos < 10) {
        cout << "0"; // exibi o zero antes dos minutos se for menor que 10
    }
    cout << minutos << " " << periodo << endl;
}

int main() {
    int horas24, minutos, horas12;
    string periodo;
    char continuar;

    do {
        cout << "Digite a hora (formato 24h): ";
        cin >> horas24;
        cout << "Digite os minutos: ";
        cin >> minutos;

        if (horas24 < 0 || horas24 > 23 || minutos < 0 || minutos > 59) {
            cout << "Horario invalido. Tente novamente." << endl;
            continue;
        }

        converterPara12h(horas24, minutos, horas12, periodo);

        exibirResultado(horas12, minutos, periodo);

        // pergunta se o usuario deseja fazer outra conversao
        cout << "Deseja converter outro horario? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
