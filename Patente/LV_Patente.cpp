#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    string nome,cognome;
    int anni;
    cout << "Inserire nome e Cognome" << endl;
    cout << "Nome: ";
    cin >> nome;
    cout << "Cognome: ";
    cin >> cognome;
    cout << "Inserire la propria età: ";
    cin >> anni;
    if (anni>10) {
        if (anni>=18) {
            cout << nome << " " << cognome << " puoi prendere la patente" << endl;
        }
        else {
            cout << nome << " " << cognome << " non puoi prendere la patente" << endl;
        }
    }
    else {
        cout << "Inserire un'età corretta" << endl;
    }
    return 0;
}
