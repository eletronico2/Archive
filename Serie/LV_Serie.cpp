#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float num,nSerie;
    int c,cS,p;
    c=0;
    cS=0;
    cout << "Inserisci il numero di controllo: ";
    cin >> num;
    do
    {
        if (c==0)
        {
            while (num==0)
                {
                    cout << "Inserisci un valore valido: ";
                    cin >> num;
                }
            c++;
        }
        else
        {
            cout << "Inserisci il " << c << " valore della serie: ";
            cin >> nSerie;
            c++;
        }
        if (nSerie==num)
        {
            cS++;
        }
    } while (nSerie!=0);
    cout << "Il numero di controllo appartiene alla serie " << cS << " volte!" << endl;
    return 0;
}
