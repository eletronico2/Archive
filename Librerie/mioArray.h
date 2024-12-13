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
