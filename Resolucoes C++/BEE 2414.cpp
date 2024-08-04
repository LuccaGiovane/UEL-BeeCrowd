#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int val = 1;
    vector<int> valores;

    while (val != 0)
    {
        cin >> val;
        if (val == 0) // Verificar se val é 0 para sair do loop
        {
            break;
        }
        valores.push_back(val);
    }

    sort(valores.end(), valores.begin());
    cout << valores[0] << endl;

    return 0;
}
