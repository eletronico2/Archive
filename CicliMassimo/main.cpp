#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int o, i, num, massimo;
    i=0;
    do
    {
        if (i==0)
        {
            cout << "Inserisci un numero: ";
            cin >> num;
        }
        else
        {
            cout << "Inserisci un valore valido" << endl;
            cout << ": ";
            cin >> num;
        }
        i++;
    } while (num<0);
    i=0;
    do
    {
        if (i==0)
        {
            cout << "Inserisci il numero massimo: ";
            cin >> massimo;
        }
        else
        {
            cout << "Inserisci un valore valido";
            cout << ": ";
            cin >> massimo;
        }
    } while (massimo<0);
    cout << endl;
    i=0;
    do
    {
        i++;
        o = num*i;
        cout << o << endl;
    } while ((o<massimo)&&(o!=massimo));
    return 0;
}
