#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;

    cin >> N;

    vector<int> votos(N);

    // Lê os votos para cada candidato
    for (int i = 0; i < N; ++i)
    {
        cin >> votos[i];
    }

    // Encontra o número máximo de votos
    int maxVotos = votos[0];
    for (int i = 1; i < N; ++i)
    {
        if (votos[i] > maxVotos)
        {
            maxVotos = votos[i];
        }
    }

    // Verifica se o primeiro candidato tem o número máximo de votos
    if (votos[0] == maxVotos)
    {
        cout << 'S' << endl;
    }
    else
    {
        cout << 'N' << endl;
    }

    return 0;
}
