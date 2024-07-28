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

    for (int i = 7; i < 12; ++i)
    {
        for (int j = 12 - i; j < i; ++j)
        {
            soma += matriz[i][j];
            elementos++;
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
