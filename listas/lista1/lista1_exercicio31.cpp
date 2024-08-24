#include <iostream>
using namespace std;

int main()
{
  int ano;
  cout << "Digite um ano: ";
  cin >> ano;

  // Verifica se o ano é bissexto
  if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
  {
    cout << ano << " e um ano bissexto.";
  }
  else
  {
    cout << ano << " nao e um ano bissexto.";
  }

  return 0;
}