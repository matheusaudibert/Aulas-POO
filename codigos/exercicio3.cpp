// Exercicio 3 Informa o numero de dia de cada mês

#include <iostream>

using namespace std;
int main()
{

  int mes;

  cout << "\n";
  cout << "Estrutura de controle com multipla escolha\n\n";
  cout << "* Infome o numero equivalente ao mes desejado: ";
  cin >> mes;

  switch (mes)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout << "\n=> O mes " << mes << " possui 31 dias";
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    cout << "\n=> O mes" << mes << " possui 30 dias.";
    break;

  case 2:
    cout << "\n=> O mes " << mes << " possui 29 dias.";
    break;

  default:
    cout << "\n=> O mes " << mes << "nao existe!";
    break;
  }
  cout << "\n\n";
  return 0;
}