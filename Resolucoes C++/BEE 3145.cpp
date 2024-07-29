#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int anoes;
    double distancia;

    cin >> anoes >> distancia;

    anoes = anoes + 2;
    distancia /= (double)anoes;

    cout << fixed << setprecision(2);
    cout << distancia << endl;
}