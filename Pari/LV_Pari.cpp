#include <iostream>

using namespace std;

int pari(int a)
{
    bool o;
    if (a%2==0)
    {
        o = true;
    }
    else 
    {
        o = false;
    }
    return o;
}

int main()
{
    setlocale(LC_ALL,"");

    int n,num,numP,c=0;

    do
    {
        cout << "Inserisci quanti numeri contare: ";
        cin >> n;
        if (n<=0)
        {
            cout << "\n\tInserisci un numero valido! [Superiore a 0]\n\n";
        }
    } while (n<=0);

    for (int i=1;i<= n;i++)
    {
        cout << "Inserisci il " << i << " numero: ";
        cin >> num;
        numP = pari(num);
        cout << numP << endl;
        if (numP==true)
        {
            c++;
        }
    }

    cout << "\nI numeri pari sono " << c << endl;
    return 0;
}