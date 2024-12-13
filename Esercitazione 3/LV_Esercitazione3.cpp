#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,quad,o;

    cout << "Inserisci un numero cui si vuole calcolare la potenza: ";
    cin >> num;
    do
    {
        cout << "Inserisci l'esponente a potenza: ";
        cin >> quad;
        if (quad<0)
        {
            cout << "Inserisci un valore valido!" << endl << endl;
        }
    } while (quad<0);

    if (num<0)
    {
        num*=-1;
    }
    o=num;
    for (int i = 1; i<=quad; i++)
    {
        o*=num;
        cout << "Debug: " << o << endl;
    }
    cout << num << "^" << quad << "=" << o << endl;
    return 0;
}
