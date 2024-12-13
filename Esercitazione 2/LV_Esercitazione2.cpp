#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,m = 0;
    do
    {
        cout << "Inserisci il primo numero: ";
        cin >> num1;
        if (num1==0)
        {
            cout << "Inserisci un valore valido!" << endl << endl;
        }
    } while (num1==0);
    do
    {
        cout << "Inserisci il secondo numero: ";
        cin >> num2;
        if (num2==0)
        {
            cout << "Inserisci un valore valido!" << endl << endl;
        }
    } while (num2==0);

    if ((num1<0)&&(num2<0))
    {
        num1*=-1;
        num2*=-1;
    }

    for (int i = 0; i<num2; i++)
    {
        m+=num1;
    }
    cout << m;
    return 0;
}
