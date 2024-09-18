#include <iostream>
#include <iomanip>
using namespace std;

//Função principal
int main(void) {

    //Declaração de variaveis
    float n1, n2, media{0};

    //Entrada de dados
    cout << "\n";
    cout << "Desvio condicional simples\n\n";
    cout << "* Informe as duas notas do aluno: ";

    cin >> n1 >> n2;

    //Calcula a média do aluno
    media = (n1 + n2)/2;

    //Formatação do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //Verifica se ele foi aprovado
    if(media < 4) {
        cout << "* O aluno foi reprovado com média final " << media << "!\n";
    } else if (media >=4 && media <= 6) {
        cout << "* O aluno obteve média final " << media << " Ele deve realizar o IFA.";
    } else {
        cout << "* O aluno foi aprovado com média final " << media << "!";
    }

    cout << "\n\n";
}
