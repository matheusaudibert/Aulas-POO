#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
    double populacaoA = 80000;
    double populacaoB = 200000;
    double taxaCrescimentoA = 0.03;
    double taxaCrescimentoB = 0.015;
    int anos = 0;

   
    while (populacaoA < populacaoB) {
        populacaoA *= (1 + taxaCrescimentoA);
        populacaoB *= (1 + taxaCrescimentoB);
        anos++;
    }

   
    cout << fixed << setprecision(0);
    cout << "Numero de anos necessarios para a populacao do pais A ultrapassar ou igualar a populacao do pais B: " << anos << " anos." << endl;

    return 0;
}
