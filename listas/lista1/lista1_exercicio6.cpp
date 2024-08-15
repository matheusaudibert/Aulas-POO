#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float tempo_gasto;
  float velocidade_media;
  float quilometros_por_litro;
  float distancia;
  float litro_gasto;

  cout << "Informe o tempo gasto na viajem (minutos): ";
  cin >> tempo_gasto;
  cout << "Informe a velocidade media durante a viajem (km/h): ";
  cin >> velocidade_media;
  cout << "Informe a quantidade de quilometros que o automovel faz com um litro: ";
  cin >> quilometros_por_litro;

  tempo_gasto = tempo_gasto / 60;
  distancia = velocidade_media * tempo_gasto;
  litro_gasto = distancia / quilometros_por_litro;

  cout << setprecision(2);
  cout << fixed;
  cout << setiosflags(ios::showpoint);
  cout << "A quantidade de litros gasta nesta viajem foi de " << litro_gasto << " litros.";

  return 0;
}