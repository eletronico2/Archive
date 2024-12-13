#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int n,c;
    do
    {
        cout << "Inserisci un numero" << endl << " : ";
        cin >> n;
        cout << endl;
        if (n<0)
        {
            cout << "Inserire un valore valido" << endl;
        }
    } while (n<0);
    c=n;
    n*=n;
    for (int i=1;c!=0;i+=2)
    {
        c--;
        cout << i;
        if (c!=0)
        {
            cout << "+";
        }
    }
    cout << endl << "Il professore ha ragione" << endl;
    cout << endl << "Il quadrato è: " << n;
    return 0;
}
