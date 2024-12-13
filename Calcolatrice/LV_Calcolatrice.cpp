#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    char option;
    int A,B,i;
    float R;
    cout << "Inserire l'opzione:" << endl;
    cout << "?. Espressione A+5*B+7" << endl;
    cout << "$. Differenza fra A e B" << endl;
    cout << "@. Elevazione al cubo" << endl;
    cout << "^. Elevazione al quadrato e poi lo divide per 2" << endl;
    cout << ": ";
    cin >> option;
    cout << endl;
    cout << "Inserisci un numero: ";
    cin >> A;
    if ((option=='?')||(option=='$'))
    {
        cout << "Inserisci un secondo numero: ";
        cin >> B;
    }
    switch (option)
    {
        case '?' : R = A+5*B+7;
                    break;
        case '$' : if (A<B)
                   {
                       i = A;
                       A = B;
                       B = A;
                   }
                   R = A-B;
                    break;
        case '@' : R = A*A*A;
                    break;
        case '^' : R = (A*A)/2;
                    break;
        default : cout << "Inserire un valore valido" << endl;
    }
    if ((option=='?')||(option=='$')||(option=='@')||(option=='^')) 
    {
        cout << "Il risultato è " << R << endl;
    }
    return 0;
}
