#include <iostream>
#include <random>

using namespace std;

int  main()
{
    cout << "**********************************************" << endl;
    cout << "Jogo simples para consolidação de conhecimento" << endl;
    cout << "**********************************************" << endl;

    int numeroSecreto;
    int chute;
    int dificuldade;
    int chances;

    // Inicializa o gerador de números aleatórios com um seed baseado no relógio do sistema
    random_device rd;
    mt19937 gen(rd());

    // Define a distribuição de números aleatórios no intervalo [0, 100]
    uniform_int_distribution<> dis(0, 100);

    // Gera um numero aleatorio
    numeroSecreto = dis(gen);

    cout << "Escolha a dificuldade:\n"
            "[1] Facil\n"
            "[2] Medio\n"
            "[3] Dificil\n"
            "Dificuldade: " << endl;
    cin >> dificuldade;

    // Definindo o numero de chances
    switch (dificuldade)
    {
        case 1:
            chances = 10;
            break;

        case 2:
            chances = 5;
            break;

        case 3:
            chances = 3;
            break;

        default:
            cout <<"ERRO! Dificuldade inválida!" << endl;
            break;
    }

    for (int i = 0; i < chances; i++)
    {
        cout <<"Chute um valor:" << endl;
        cin >> chute;
        cout <<"Seu chute foi [" << chute << "]." << endl;

        if(chute == numeroSecreto)
        {
            cout << "Parabéns você acertou!!" <<endl;
            break;
        }
        else if(chute > numeroSecreto)
        {
            cout << "Seu chute foi maior que o número secreto." << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o número secreto." << endl;
        }
    }
    cout << "O número secreto era [" << numeroSecreto << "]" << endl;
}