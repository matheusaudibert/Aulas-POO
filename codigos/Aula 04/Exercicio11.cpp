//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Exemplo 11: exemplo de fun��o
//
//Programa que utiliza fun��es para implementar uma calculadora simples.
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Variaeis Globais
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

float resultado, N1, N2;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Prototipos de funcao
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Funcaoo principal
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main() {

    //Declara��c das vari�veis
    int opcao = 0;

    //La�o para escolha de opera��o desejada
    while (opcao != 5) {

        //Formata��o
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        //Cabe�alho
        cout << "\n";
        cout << "----------------------" << endl;
        cout << " Programa Calculadora " << endl;
        cout << "    Menu Principal    " << endl;
        cout << "----------------------" << endl;
        cout << "\n";

        //Op��es de menu
        cout << "[1] - Adi��o" << endl;
        cout << "[2] - Subtra��o" << endl;
        cout << "[3] - Multiplica��o" << endl;
        cout << "[4] - Divis�o" << endl;
        cout << "[5] - Encerrar programa" << endl;
        cout << "\n";

        //Entrada do usu�rio
        cout << "=> Escolha uma op��o: "; cin >> opcao;

        //Se o usu�rio n�o deseja encerrar o programa
        if(opcao != 5) {

            //Verifica a op��o escolhida pelo usu�rio
            switch (opcao) {

                //Adi��o
                case 1:
                    adicao();
                    break;

                //Subtra��o
                case 2:
                    subtracao();
                    break;

                //Multiplica��o
                case 3:
                    multiplicacao();
                    break;

                //Divis�o
                case 4:
                    divisao();
                    break;

            }

        }
        //Encerra o programa
        else {
            cout << "\nPrograma encerrado com sucesso!\n\n";
        }

    }
    //Fim do programa
    return 0;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Defini��o das fun��es
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a entrada dos n�meros que ser�o utilizados para realizar a opera��o
void entrada() {

    cout << "\n";
    cout << "* Informe o primeiro n�mero: "; cin >> N1;
    cout << "* Informe o segundo n�mero: "; cin >> N2;

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Exibe o resultado da opera��o
void saida(string operacao) {

    cout << "\n";
    cout << "=> O resultado da " << operacao;
    cout << " entre " << N1 << " e " << N2;
    cout << " � " << resultado << "!\n";

    //Simula uma pausa no programa
    pausa();

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Simula uma pausa na execu��o do programa
void pausa() {

    char letra;

    cout << "\n";
    cout << "Tecle <c> + <Enter> para voltar ao menu: ";

    //La�o para receber a entrada do usu�rio
    do {

        //Obt�m a entrada do usu�rio
        letra = cin.get();

        //converte para letras mai�sculas
        letra = toupper(letra);

    }while (letra != 'C');

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a opera��o de adi��o
void adicao() {

    //Cabe�alho
    cout << "\n";
    cout << " Rotina de Adi��o " << endl;
    cout << "------------------" << endl;

    //Executa a fun��o para obter os dados
    entrada();

    //Calcula a adi��o
    resultado = N1 + N2;

    //Executa a fun��o para exibir o resultado
    saida("adi��o");

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a opera��o de subtra��o
void subtracao() {

    //Cabe�alho
    cout << "\n";
    cout << " Rotina de Subtra��o " << endl;
    cout << "---------------------" << endl;

    //Executa a fun��o para obter os dados
    entrada();

    //Calcula a adi��o
    resultado = N1 - N2;

    //Executa a fun��o para exibir o resultado
    saida("subtra��o");

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//Realiza a opera��o de multiplica��o
void multiplicacao() {

    //Cabe�alho
    cout << "\n";
    cout << " Rotina de Multiplica��o " << endl;
    cout << "-------------------------" << endl;

    //Executa a fun��o para obter os dados
    entrada();

    //Calcula a adi��o
    resultado = N1 * N2;

    //Executa a fun��o para exibir o resultado
    saida("multiplica��o");

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Realiza a opera��o de divis�o
void divisao() {

    //Cabe�alho
    cout << "\n";
    cout << " Rotina de Divis�o " << endl;
    cout << "-------------------" << endl;

    //Executa a fun��o para obter os dados
    entrada();

    //verifica se n�o est� ocorrendo uma divis�o por zero
    if(N2 == 0) {

        cout << "\n";
        cout << "Erro de divis�o\n";

        //Simula uma pausa no programa
        pausa();
    }

    //Caso contr�rio
    else {

        //Calcula a adi��o
        resultado = N1 / N2;

        //Executa a fun��o para exibir o resultado
        saida("divis�o");

    }

}
