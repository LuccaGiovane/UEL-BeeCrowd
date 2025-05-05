#include <iostream>

using namespace std;

int main()
{
    int linha;
    double matriz[12][12];
    double result = 0;
    char operacao;

    // recebe a linha onde deve ser feita a operação e o tipo da operação
    cin >> linha;
    cin >> operacao;

    //insere os valores na matriz
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            //valor inserido do usuario na posicao ij da matriz
            cin >> matriz[i][j];
        }
    }

    //arruma o cout para SEMPRE imprimir numeros com 1 casa apos a virgula
    cout.precision(1);
    cout << fixed;

    //faz a operação escolhida
    if(operacao == 'S')
    {
        for (int i = 0; i < 12; ++i)
        {
            result += matriz[linha][i];
        }
        cout << result <<endl;
    }
    else
    {
        for (int i = 0; i < 12; ++i)
        {
            result += matriz[linha][i];
        }
        result /= 12;
        cout << result << endl;
    }

}