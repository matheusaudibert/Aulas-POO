// Exercicio 1 Verificao de média

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float n1, n2, media{0};

  cout << "\n";
  cout << "Desviou condicional simples\n\n";
  cout << "Informe as duas notas do aluno: ";

  cin >> n1 >> n2;

  // Calcula da media do aluno
  media = (n1 + n2) / 2;

  // Formatação do resultado
  cout << setprecision(4);
  cout << setiosflags(ios::showpoint);

  // Verifica se ele foi aprovado
  if (media >= 6)
  {
    cout << "* O aluno foi aprovado com media final " << media << "!\n";

    cout << "\n";

    // Fim do programa
    return 0;
  }
}