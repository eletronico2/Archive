#include <iostream>
#include "mioArray.h"

using namespace std;

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
