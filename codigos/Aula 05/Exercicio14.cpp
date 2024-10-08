//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Exemplo 14: exemplo de escopo est�tico
//
//Programa que demonstra a utiliza��o de static.
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Prot�tipo de fun��o
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void incremento();

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Fun��o principal
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main(){
    cout << "\n";

    //loop para demonstrar a utiliza��o de static
    for(int i = 0; i < 5; i++) {
        cout << "i: " << i << " -- valor: ";
        incremento();
    }

    cout << "\n";

    //Fim do programa
    return 0;

}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Defini��o das fun��es
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Fun��o que retorna o incremento de um valor
void incremento() {

    //Defini��o da vari�vel est�tica
    static int valor = 0;

    //Exibe seu valor
    cout << valor << "\n";

    //incrementa o valor da vari�vel
    valor += 5;

}
