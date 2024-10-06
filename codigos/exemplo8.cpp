#include <iostream>

using namespace std;

int soma(int a, int b);
int subtrai(int a, int b);
int (*operacao)(int, int);

int main(void){

  cout << "";

  operacao = soma;

  cout << "soma: " << operacao(10,5);

  operacao = subtrai;

  cout << "subtracao: " << operacao(10,5);

  cout << endl;

  return 0;

}

int soma(int a, int b){
  return a + b;
}

int subtrai(int a, int b){
  return a - b;
}
