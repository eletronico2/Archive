#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,s,n,disp;
    do
    {
        cout << "Inserisci il numero di cui fare il cubo: ";
        cin >> num;
        if ((num<0)||(num>10))
        {
            cout << "Inserisci un valore valido (fra 0 e 10): ";
            cin >> num;
        }
    } while ((num<0)||(num>10));

    disp = 1;
    for (n = 1; n <= num; n++)
    {
        s=0;
        cout << n << "^3 = ";
        for (int i = 1; i <= n; i++)
        {
            s+=disp;
            if (s!=1)
            {
                cout << disp << " + ";
            }
            disp+=2;

        }
        if (s!=1)
        {
            cout << " = ";
        }
        cout << s << endl;
    }

    cout << "Il cubo del numero è: " << s << endl;
    return 0;
}
