#include <iostream>
#include <iomanip>
using namespace std;

//Fun��o principal
int main(void) {

    //Declara��o de variaveis
    float n1, n2, media{0};

    //Entrada de dados
    cout << "\n";
    cout << "Desvio condicional simples\n\n";
    cout << "* Informe as duas notas do aluno: ";

    cin >> n1 >> n2;

    //Calcula a m�dia do aluno
    media = (n1 + n2)/2;

    //Formata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //Verifica se ele foi aprovado
    if(media >= 6) {
        cout << "* O aluno foi aprovado com m�dia final " << media << "!\n";
    }

    cout << "\n";
}
