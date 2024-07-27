#include <iostream>

using namespace std;

int main()
{
    int a, b, q, r;

    cin >> a >> b;

    q = a/b;
    r = a%b;

    // Se o resto for negativo, ajusta o quociente e o resto
    if (r < 0) {
        r += abs(b);
        q -= (b > 0) ? 1 : -1;
    }
    cout << q << " " << r << endl;
}