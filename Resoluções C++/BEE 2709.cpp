#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Função para verificar se um número é primo
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int M;
    while (cin >> M) {
        vector<int> moedas(M);

        // Lê os valores das moedas
        for (int i = 0; i < M; ++i) {
            cin >> moedas[i];
        }

        int N;
        cin >> N;

        // Calcula a soma das moedas com o salto N
        int soma = 0;
        for (int i = M - 1; i >= 0; i -= N) {
            soma += moedas[i];
        }

        // Verifica se a soma é um número primo e imprime o resultado
        if (isPrime(soma)) {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        } else {
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }

    return 0;
}
