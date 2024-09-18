//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 11: Exemplo de uso de strcat e strncat
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Função Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo de uso de strcat() e strncat()\n\n";

    //Declara os arrays de caracteres
    char parte1[50] = "Instituto";
    char parte2[] = "Federal";
    char texto[20] = "";

    //Concatena <parte2> dentro de <parte1>
    strcat(parte1, parte2);

    //Concatena somente os 5 primeiros caracteres de <parte1> dentro de <texto>
    strncat(texto, parte1, 5);

    //Apresenta o resultado
    cout << "-> Parte 1: " << parte1 << endl;
    cout << "-> Parte 2: " << parte2 << endl;
    cout << "-> Texto..: " << texto << endl;

    cout << endl;

    return 0;

}
