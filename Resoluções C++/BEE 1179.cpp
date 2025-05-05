#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> pares;   // Vetor para armazenar números pares
    vector<int> impares; // Vetor para armazenar números ímpares

    int numero;

    // Leitura dos 15 números
    for (int i = 0; i < 15; i++) {
        cin >> numero;

        if (numero % 2 == 0) {
            // Adiciona o número ao vetor pares
            pares.push_back(numero);

            // Se o vetor pares tiver 5 elementos, imprime e limpa
            if (pares.size() == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << pares[j] << endl;
                }
                pares.clear();  // Limpa o vetor para reutilizar
            }
        } else {
            // Adiciona o número ao vetor impares
            impares.push_back(numero);

            // Se o vetor impares tiver 5 elementos, imprime e limpa
            if (impares.size() == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impares[j] << endl;
                }
                impares.clear();  // Limpa o vetor para reutilizar
            }
        }
    }

    // Imprime o conteúdo restante dos vetores
    if (!impares.empty()) {
        for (int i = 0; i < impares.size(); i++) {
            cout << "impar[" << i << "] = " << impares[i] << endl;
        }
    }

    if (!pares.empty()) {
        for (int i = 0; i < pares.size(); i++) {
            cout << "par[" << i << "] = " << pares[i] << endl;
        }
    }

    return 0;
}