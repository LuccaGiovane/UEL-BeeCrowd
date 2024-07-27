#include <iostream>
#include <string>

using namespace std;

bool palavraContem(char letra);

const string PALAVRA_SECRETA = "laranja";

int main()
{


    char letra;

    bool enforcou = false;
    bool acertou = false;

    while( (enforcou == false) &&(acertou == false))
    {
        cout << "Insira uma letra:" << endl;
        cin >> letra;

        if (palavraContem(letra))
        {
            cout << "Esta letra está na palavra." << endl;
        }
        else
        {
            cout << "Esta letra não está na palavra." << endl;
        }

    }
}

bool palavraContem(char letra)
{
    for(char letraPalavra : PALAVRA_SECRETA)
    {
        if (letra == letraPalavra)
        {
            return true;
        }
    }
    return false;
}