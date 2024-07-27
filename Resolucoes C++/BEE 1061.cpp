#include <iostream>
using namespace std;

struct Tempo {
    int dia, hora, minuto, segundo;
};

int main() {
    Tempo inicio, fim;

    // Leitura do início do evento
    string lixo;
    cin >> lixo >> inicio.dia;
    cin >> inicio.hora >> lixo >> inicio.minuto >> lixo >> inicio.segundo;

    // Leitura do término do evento
    cin >> lixo >> fim.dia;
    cin >> fim.hora >> lixo >> fim.minuto >> lixo >> fim.segundo;

    // Converte tudo para segundos
    int inicio_segundos = inicio.dia * 24 * 3600 + inicio.hora * 3600 + inicio.minuto * 60 + inicio.segundo;
    int fim_segundos = fim.dia * 24 * 3600 + fim.hora * 3600 + fim.minuto * 60 + fim.segundo;

    // Calcula a diferença em segundos
    int duracao_segundos = fim_segundos - inicio_segundos;

    // Converte de volta para dias, horas, minutos e segundos
    int dias = duracao_segundos / (24 * 3600);
    duracao_segundos %= 24 * 3600;
    int horas = duracao_segundos / 3600;
    duracao_segundos %= 3600;
    int minutos = duracao_segundos / 60;
    int segundos = duracao_segundos % 60;

    // Imprime a duração do evento
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
