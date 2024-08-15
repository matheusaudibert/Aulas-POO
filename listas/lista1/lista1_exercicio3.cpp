#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  float n;
  float soma = 0;
  float media;

  cout << "* Informe as notas do aluno\n";
  for (int i = 1; i < 5; i++)
  {
    cout << "Nota " << i << ": ";
    cin >> n;
    soma = soma + n;
  }

  media = soma / 4;
  cout << setprecision(3);
  cout << setiosflags(ios::showpoint);
  cout << "\nMedia do aluno: " << media;

  return 0;
}