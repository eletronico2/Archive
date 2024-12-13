#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int intInf,intSup,i;
    cout << "Inserisci l'intervallo minore: ";
    cin >> intInf;
    do
    {
        cout << "Inserisci l'intervallo maggiore: ";
        cin >> intSup;
        if (intSup<intInf)
        {
            cout << "Inserire un valore valido" << endl;
        }
    } while (intSup<intInf);
    for (i=intInf;i<=intSup;i++)
    {
        cout << i << endl;
    }
    return 0;
}
