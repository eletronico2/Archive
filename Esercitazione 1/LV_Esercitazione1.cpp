#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,divid,test;
    do
    {
        cout << "Inserisci il dividendo: ";
        cin >> num;
        if (num<=0)
        {
            cout << "Inserisci un valore valido!" << endl << endl;
        }
    } while (num<=0);
    do
    {
        cout << "Inserisci il divisore: ";
        cin >> divid;
        if (divid<=0)
        {
            cout << "Inserisci un valore valido!" << endl << endl;
        }
    } while (divid<=0);

    test = num/divid;
    int o=0;
    while (num>=divid)
    {
        num-=divid;
        o++;
    }
    cout << endl << "Il risultato è " << o << endl;
    o = num%divid;
    cout << "Test del risultato: " << test << endl;
    cout << "Il resto è " << o << endl;
    return 0;
}
