#include <iostream>
#include <iomanip>
using namespace std;


#define LINHAS 10
#define COLUNAS 10

int main() {
    cout << "\n";
    cout << "Exemplo de Array Bidimensional\n\n";

    
    int i, j;

    
    float notas[LINHAS][COLUNAS + 1];

   
    float soma;
    float media;

    
    cout << "* Informe as " << COLUNAS << " notas dos " << LINHAS << " alunos: \n\n";

  
    for (i = 0; i < LINHAS; i++) {
        cout << "Informe as notas do aluno " << i + 1 << ": ";

        
        for (j = 0; j < COLUNAS; j++) {
           
            cin >> notas[i][j];
        }
    }

    for (i = 0; i < LINHAS; i++) {
       
        soma = 0;

        
        for (j = 0; j < COLUNAS; j++) {
          
            soma += notas[i][j];
        }

        notas[i][COLUNAS] = soma / COLUNAS;
    }

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    cout << "\n* Resultado final: \n\n";

  
    cout << setw(6) << "Aluno";

    for (j = 0; j < COLUNAS; j++) {
        cout << setw(10) << "Nota " << j + 1;
    }

    cout << setw(10) << "Media";
    cout << "\n\n";

    for (i = 0; i < LINHAS; i++) {
        cout << setw(6) << i + 1;

        for (j = 0; j < COLUNAS; j++) {
            cout << setw(10) << notas[i][j];
        }

        cout << setw(10) << notas[i][COLUNAS];
        cout << "\n";
    }

    cout << "\n";

    return 0;
}
