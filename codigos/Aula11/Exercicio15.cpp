#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
  cout <<"\n";

  cout << "Exemplo de uso de strtok() e de Alocacao Dinamica\n\n";

  char texto[] = "Minha-frase-de-token";

  char separador[] = "-";

  int capacidade = 2;

  char **tokens = nullptr;

  tokens = new char*[capacidade];

  char *tokenPtr;

  int i, total;

  cout << "* Texto inicial: " << texto << "\n\n";

  tokenPtr = strtok(texto, separador);

  total = 0;

  while (tokenPtr != NULL){
    if(total >= capacidade){
      capacidade *= 2; 

      char **temp = new char*[capacidade];

      for(i=0; i<total; i++){
        temp[i] = tokens[i];
      }

      delete[] tokens;

      tokens = temp;
    }

    tokens[total] = tokenPtr;

    total++;

    tokenPtr = strtok(NULL, separador);

  }

  cout << "* Foram gerador " << total << " tokens: \n\n";

  for(i = 0;i < total; i++){
    cout << i + 1 << ". -> " << tokens[i] << endl;
  }

  cout << endl;

  return 0;

}