//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 10: Exemplo de uso de strcpy e strncpy
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Função Principal
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Exemplo de uso de strcpy() e strncpy()\n\n";

    //Declara os arrays de caracteres
    char nome[] = "Instituto Federal";
    char texto1[20];
    char texto2[11];

    //Realiza a cópia do conteúdo de <nome> para <texto1>
    strcpy(texto1, nome);

    //Copia os primeiros 9 caracteres de <nome> para <texto2>
    strncpy(texto2, nome, 9);

    //Acrescenta o '\0' no final de <texto2> (caracter nulo, necessário para indicar o final)
    texto2[10] = '\0';

    //Apresenta o resultado
    cout << "-> Nome...: " << nome << endl;
    cout << "-> Texto 1: " << texto1 << endl;
    cout << "-> Texto 2: " << texto2 << endl;

    cout << endl;

    return 0;

}
