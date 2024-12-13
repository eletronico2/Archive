#include <iostream>

using namespace std;

void benv(string nome,bool valueB)
{
    /*
    Funzione che stampa a schermo il
    messaggio di benvenuto corretto
    in base al genere immesso
    */
    if (valueB==true) // IF di controllo
    {
        cout << endl << "Benvenuto " << nome << "!" << endl;
    }
    else {
        cout << endl << "Benvenuta " << nome << "!" << endl;
    }
}

int main()
{
    setlocale(LC_ALL,"");
    /*
        Tabella delle variabili:
            |nome = Nome dell'utente
            |genere = Genere dell'utente
    */
    string nome;
    char genere;

    do {
        cout << "Inserisci il nome: ";
        cin >> nome;
        cout << "Inserisci il tuo genere: ";
        cin >> genere;
        if ((genere!='M')&&(genere!='F'))
        {
            cout << "\n\tInserisci un valore valido!\n\tAttenzione, i caratteri devono essere scritti in maiuscolo Es. 'M'\n\n"; // Mesaggio di errore
        }
    } while ((genere!='M')&&(genere!='F')); // Ciclo di controllo del genere
    if (genere=='M') // IF che associa il valore char al valore booleano corretto; Output Finale
    {
        benv(nome,true);
    }
    if (genere=='F')
    {
        benv(nome,false);
    }
    return 0;
}
