#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Estrutura para armazenar os dados de cada peça de carne
struct Carne {
    string nome;
    int validade;
};

// Função de comparação para ordenar as peças de carne pela validade
bool compararPorValidade(const Carne &a, const Carne &b) {
    return a.validade < b.validade;
}

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) break; // Fim de arquivo
        vector<Carne> carnes(N);

        // Leitura das peças de carne
        for (int i = 0; i < N; ++i) {
            cin >> carnes[i].nome >> carnes[i].validade;
        }

        // Ordenação das peças de carne pela validade
        sort(carnes.begin(), carnes.end(), compararPorValidade);

        // Impressão da sequência das peças de carne ordenadas
        for (int i = 0; i < N; ++i) {
            if (i > 0) cout << " ";
            cout << carnes[i].nome;
        }
        cout << endl;
    }

    return 0;
}
