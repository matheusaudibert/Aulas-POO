#include <iostream>
#include <string>
using namespace std;

int main(){

  cout << "\n";
  cout << "Exemplo de Arrays unidimensionais\n\n";

 
  int arrayInt[5] = {1,2,3,4,5};
  float arrayFloat[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double arrayDouble[5] = {1.11, 2.22, 3.33, 4.44, 5.55};
  char arrayChar[5] = {'a', 'b', 'c', 'd', 'e'};
  string arrayString[5] = {"Joao", "Pedro", "Luiz", "Mariano", "Carlos"};

  
  cout << "arrayInt[0]: " << arrayInt[0] << endl;
  cout << "arrayFloat[0]: " << arrayFloat[0] << endl;
  cout << "arrayDouble[0]: " << arrayDouble[0] << endl;
  cout << "arrayChar[0]: " << arrayChar[0] << endl;
  cout << "arrayString[0]: " << arrayString[0] << endl;

  return 0;

}