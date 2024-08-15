#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float C;
  float F;
  float K;

  cout << "Insira a temperatura em Celsius: ";
  cin >> C;

  F = (9 * C + 160) / 5;
  K = C + 273.15;

  cout << setprecision(2);
  cout << fixed;
  cout << setiosflags(ios::showpoint);
  cout << "Temperatura em Fahrenheit: " << F << " F";
  cout << endl;
  cout << "Temperatua em Kelvin: " << K << " K";

  return 0;
}