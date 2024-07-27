#include <iostream>
#include <random>

using namespace std;

int  main()
{
    cout << "**********************************************" << endl;
    cout << "Jogo simples para consolidação de conhecimento" << endl;
    cout << "**********************************************" << endl;

    // Inicializa o gerador de números aleatórios com um seed baseado no relógio do sistema
    random_device rd;
    mt19937 gen(rd());

    // Define a distribuição de números aleatórios no intervalo [0, 100]
    uniform_int_distribution<> dis(0, 100);

    const int numeroSecreto = dis(gen);;

    int chute;
    int dificuldade;
    int chances;

    double pontos = 1000.0;
    double pontosPerdidos = 0.0;

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

    // Laço do jogo
    for (int i = 0; i < chances; i++)
    {
        cout <<"Chute um valor:" << endl;
        cin >> chute;

        pontosPerdidos = abs(chute - numeroSecreto)/2.0;
        pontos -= pontosPerdidos;

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

    // Imprime fim do jogo caso a dificuldade escolhida tenha sido valida
    if(chute == numeroSecreto)
    {
        cout << "O número secreto era [" << numeroSecreto << "]" << endl;

        cout.precision(2); // avisa que vai imprimir um numero com virgula
        cout << fixed; // seta para sempre printar assim
        cout << "Pontuação [" << pontos << "]" << endl;
    }
}