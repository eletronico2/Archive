#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    char i;
    cout << "Inserisci l'iniziale della stagione desiderata: ";
    cin >> i;
    switch (i)
    {
        case 'p' : cout << "Primavera" << endl;
                   cout << "Inizia il 20 marzo" << endl;
                   cout << "Finisce il 20 giugno" << endl;
                break;
        case 'e' : cout << "Estate" << endl;
                   cout << "Inizia il 20 giugno" << endl;
                   cout << "Finisce il 21 dicembre" << endl;
                break;
        case 'a' : cout << "Autunno" << endl;
                   cout << "Inizia il 23 settembre" << endl;
                   cout << "Finisce il 21 dicembre" << endl;
                break;
        case 'i' : cout << "Inverno" << endl;
                   cout << "Inizia il 22 dicembre" << endl;
                   cout << "Finisce il 20 marzo" << endl;
                break;
        default : cout << "Inserisci un valore valido" << endl;
    }
    return 0;
}