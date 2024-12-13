#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int n,x,s,p,i;
    i=0;
    do
    {
        if (i==0)
        {
            cout << "Inserisci un numero: ";
            cin >> n;
            cout << "Inserisci l'elevamento a potenza: ";
            cin >> x;
        }
        else
        {
            cout << "Inserisci  un valore valido" << endl;
            cout << "Elevamento a potenza: ";
            cin >> x;
        }
        i++;
    } while (x<0);
    s=1;
    p=1;
    cout << endl;
    while (s<=x)
    {
        p=p*n;
        s++;
        cout << p << endl;
    }
    cout << endl;
    cout << "Il risultato è " << p <<endl;
    return 0;
}
