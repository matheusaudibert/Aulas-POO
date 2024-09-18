//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Exemplo 16: exemplo de uso namespaces
//
//Programa que demonstra a utilização de namespaces.
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Namespace com a definição de algumas funções estatísticas
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

namespace estatistico {

    //Variável que armazena o valor de PI
    double PI = 3.141516;

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Calculo de média
    double media(const vector<double>& dados) {

        //variável para armazenar a soma dos valores do vetor
        double soma = 0;

        //Calcula a soma dos valores do vetor
        for(auto valor : dados) {
            soma += valor;
        }

        //Retorna o valor da média
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

    //Calculo da variância
    double variancia(const vector<double>&dados) {

        //Calcula a média dos valores do vetor
        double m = media(dados);

        //Variável para armazenar a soma dos valores do vetor
        double soma = 0;

        //Calcula a soma dos quadrados da diferença entre o valor e sua média
        for(auto valor : dados) {
            soma += (valor - m) * (valor - m);
        }

        //Retorna a variância dos dados
        return soma / dados.size();
    }

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Calculo do desvio padrão
    double desvioPadrao(const vector<double>&dados) {

        //Retorna o desvio padrão dos dados
        return sort(variancia(dados));

    }
}

int main() {

    //Define o vetor com os dados
    vector<double> dados = {2, 3, 3, 4, 5, 6, 7, 8, 9, 10};

    //Cabeçalho
    cout << "\n";
    cout << "Exemplo de utilização de namespace\n\n";

    //Formatação
    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    //Utiliza o namespace para calcular o resultado
    cout << "Valor de PI..: " << estatistico::PI << endl;
    cout << "Média........: " << estatistico::media(dados) << endl;
    cout << "Mediana......: " << estatistico::mediana(dados) << endl;
    cout << "Variância....: " << estatistico::variancia(dados) << endl;
    cout << "Desvio Padrão: " << estatistico::desvioPadrao(dados) << endl;
    cout << "\n";

    //Fim do programa
    return 0;

}
