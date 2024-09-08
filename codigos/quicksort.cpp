#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#define TAM 10

void trocar(string& a, string& b);
int particao(string dados[], int menor, int maior);
void quickSort(string dados[], int menor, int maior);

int main(){
  cout << "\n";
  cout << "Exemplo: Quick Sort\n\n";

  int i;

  string nomes[TAM];

  for (i = 0; i<TAM; i++){
    cout << "Informe o nome " << i+1 << ": "; 
    getline(cin, nomes[i]); 
  }

  cout << "\n";

  cout << "Nomes antes da ordenacao:\n\n";

  i=1;
  for(const auto& nome : nomes){
    cout << setw(2) << i << "." << nome << endl;
    i++;
  }

  quickSort(nomes, 0, TAM - 1);

  cout << "\n";

  cout << "Nomes depois da ordenacao:\n\n";

  i=1;
  for(const auto& nome : nomes){
    cout << setw(2) << i << "." << nome << endl;
    i++;
  }

  cout << "\n";

  return 0;
}

void trocar(string& a, string& b){
  string temp = a;
  a = b;
  b = temp;
}

int particao(string dados[], int menor, int maior){
  string pivo = dados[maior]; 

  int i = menor - 1;

  for(int j = menor; j < maior; j++){
    if (dados[j] < pivo){
      i++;
      trocar(dados[i], dados[j]); 
    }
  }

  trocar(dados[i + 1], dados[maior]);

  return i + 1;
}

void quickSort(string dados[], int menor, int maior){
  if (menor < maior){
    int pivo = particao(dados, menor, maior);

    quickSort(dados, menor, pivo-1);
    quickSort(dados, pivo+1, maior);
  }
}