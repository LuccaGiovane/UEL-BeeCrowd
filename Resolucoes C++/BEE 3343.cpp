//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    //pegando a quantidade de titas e o tamanho das muralhas
//    int n, x;
//    cin >> n >> x;
//
//    //pegando os titas que vao atacar
//    string titas;
//    cin >> titas;
//
//    //pegando os tamanhos dos titas: pequenos(p) medios(m) e grandes(g)
//    int p, m, g;
//    cin >> p >> m >> g;
//
//    /*lista para armazenar as alturas das muralhas, pois pode sobrar
//      algum cacareco do carai que segura um pangare equeno*/
//    vector<int> muralhas(1, x);
//
//    // Mapeia os tamanhos dos titãs
//    int tamanhoTitas[256] = {};
//    tamanhoTitas['P'] = p;
//    tamanhoTitas['M'] = m;
//    tamanhoTitas['G'] = g;
//
//    for (char tita : titas)
//    {
//        int tamanhoTita = tamanhoTitas[tita];
//        bool parou = false;
//
//        //tenta usar as muralhas existentes
//        for (int& muralha : muralhas)
//        {
//            if (tamanhoTita <= muralha)
//            {
//                muralha -= tamanhoTita;
//                parou = true;
//                break;
//            }
//        }
//
//        // Se não parou, adiciona uma nova muralha
//        if (!parou)
//        {
//            muralhas.push_back(x - tamanhoTita);
//        }
//    }
//
//    cout << muralhas.size() << endl;
//    return 0;
//}
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    //pegando a quantidade de titas e o tamanho das muralhas
    int n, x;
    cin >> n >> x;

    //pegando os titas que vao atacar
    string titas;
    cin >> titas;

    //pegando os tamanhos dos titas: pequenos(p) medios(m) e grandes(g)
    int p, m, g;
    cin >> p >> m >> g;

    /*lista para armazenar as alturas das muralhas, pois pode sobrar
      algum cacareco do carai que segura um pangare equeno*/
    vector<int> muralhas(1, x);

    // Mapeia os tamanhos dos titãs
    unordered_map<char, int> tamanhoTitas = {
            {'P', p},
            {'M', m},
            {'G', g}
    };

    for (char tita : titas)
    {
        int tamanhoTita = tamanhoTitas[tita];
        bool parou = false;

        //tenta usar as muralhas existentes
        for (int& muralha : muralhas)
        {
            if (tamanhoTita <= muralha)
            {
                muralha -= tamanhoTita;
                parou = true;
                break;
            }
        }

        // Se não parou, adiciona uma nova muralha
        if (!parou)
        {
            muralhas.push_back(x - tamanhoTita);
        }
    }

    cout << muralhas.size() << endl;
    return 0;
}
