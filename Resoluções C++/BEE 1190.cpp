#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char operacao;
    cin >> operacao;

    double matriz[12][12];

    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            cin >> matriz[i][j];
        }
    }

    double soma = 0.0;
    int elementos = 0;

    // Itera sobre a área direita da matriz
    for (int i = 1; i < 11; ++i)
    {
        for (int j = 7; j < 12; ++j)
        {
            if ((i < 6 && j > 11 - i) || (i > 5 && j > i))
            {
                soma += matriz[i][j];
                elementos++;
            }
        }
    }

    // Exibe o resultado com uma casa decimal
    cout << fixed << setprecision(1);

    if (operacao == 'S')
    {
        cout << soma << endl;
    }
    else if (operacao == 'M')
    {
        cout << soma / elementos << endl;
    }

    return 0;
}
