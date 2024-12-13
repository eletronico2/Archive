#include <iostream>

using namespace std;

void caricatore(int c[])
{
    for (int i = 0;i < 10;i++)
    {
        c[i] = 0;
    }
    return;
}

void incrementatore(int c[],int n)
{
    n=n/10;
    c[n]++;
    return;
}

void stampaArray(int c[])
{
    int n = 0;
    for (int i = 0;i < 10;i++)
    {
        cout << "La fascia che parte da " << n << " ad " << n+9 << " ha " << c[i] << " numeri\n";
        n+=10;
    }
    return;
}

int main()
{
    setlocale(LC_ALL,"");
    int a[10],num;
    caricatore(a);
    do {
        cout << "Inserisci il numero: ";
        cin >> num;
        if ((num<0)||(num>100))
        {
            cout << "Valore non valido!\n";
        }
        else {
            if (num!=100)
            {
                incrementatore(a,num);
            }
        }
    } while (num!=100);
    stampaArray(a);
    return 0;
}