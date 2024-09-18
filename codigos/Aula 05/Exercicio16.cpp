//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 16: exemplo de uso namespaces
//
//Programa que demonstra a utiliza��o de namespaces.
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Namespace com a defini��o de algumas fun��es estat�sticas
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

namespace estatistico {

    //Vari�vel que armazena o valor de PI
    double PI = 3.141516;

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Calculo de m�dia
    double media(const vector<double>& dados) {

        //vari�vel para armazenar a soma dos valores do vetor
        double soma = 0;

        //Calcula a soma dos valores do vetor
        for(auto valor : dados) {
            soma += valor;
        }

        //Retorna o valor da m�dia
        return soma / dados.size();
    }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Calculo da mediana
    double mediana(vector<double> dados) {

        //Ordena os valores do vetor
        sort(dados.begin(), dados.end());

        //Calcula o tamanho do vetor
        size_t size = dados.size();

        //Retorna o valor da mediana
        if(size % 2 == 0) {
            return (dados[size / 2 - 1] + dados[size / 2]) / 2;
        } else {
            return dados[size / 2];
        }
    }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Calculo da vari�ncia
    double variancia(const vector<double>&dados) {

        //Calcula a m�dia dos valores do vetor
        double m = media(dados);

        //Vari�vel para armazenar a soma dos valores do vetor
        double soma = 0;

        //Calcula a soma dos quadrados da diferen�a entre o valor e sua m�dia
        for(auto valor : dados) {
            soma += (valor - m) * (valor - m);
        }

        //Retorna a vari�ncia dos dados
        return soma / dados.size();
    }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Calculo do desvio padr�o
    double desvioPadrao(const vector<double>&dados) {

        //Retorna o desvio padr�o dos dados
        return sort(variancia(dados));

    }
}

int main() {

    //Define o vetor com os dados
    vector<double> dados = {2, 3, 3, 4, 5, 6, 7, 8, 9, 10};

    //Cabe�alho
    cout << "\n";
    cout << "Exemplo de utiliza��o de namespace\n\n";

    //Formata��o
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    //Utiliza o namespace para calcular o resultado
    cout << "Valor de PI..: " << estatistico::PI << endl;
    cout << "M�dia........: " << estatistico::media(dados) << endl;
    cout << "Mediana......: " << estatistico::mediana(dados) << endl;
    cout << "Vari�ncia....: " << estatistico::variancia(dados) << endl;
    cout << "Desvio Padr�o: " << estatistico::desvioPadrao(dados) << endl;
    cout << "\n";

    //Fim do programa
    return 0;

}
