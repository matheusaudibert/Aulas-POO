#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float valor_hora;
  string mes;
  int horas;
  float salario;

  cout << "Informe o quanto voce ganha por hora: ";
  cin >> valor_hora;
  cout << "Informe o mes: ";
  cin >> mes;
  cout << "Informe o numero de horas trabalhadas: ";
  cin >> horas;

  salario = valor_hora * horas;

  cout << setprecision(2);
  cout << fixed;
  cout << setiosflags(ios::showpoint);
  cout << "Voce deve receber R$" << salario << " no mes de " << mes << ".";

  return 0;
}
