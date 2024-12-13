#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNum(int numA,int numB)
{
    /*
    Funzione che genera numeri casuali
    da un intervallo definito dall'utente
    */
    srand(time(0)); // Seme dei numeri casuali
    int randomNum; // Variabile contenitore
    randomNum=rand()%(numA+1-numB)+numB; // Numero casuale generale
    return randomNum; // Output della funzione
}

void scambia(int & a,int & b)
{
    /*
    Funzione che sistema l'ordine dei
    intervalli immessi dall'utente
    */
    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    setlocale(LC_ALL,"");
    /*
        Tabella variabili:
            |interM = Intervallo maggiore
            |interm = Intervallo minore
            |numR = Numero Random; Variabile che conterrà il risultato della funzione
    */
    int interM,interm,numR;

    // Input delle variabili; Si chiede all'utente i dati richiesti
    cout << "Inserisci l'intervallo maggiore: ";
    cin >> interM;
    cout << "Inserisci l'intervallo minore: ";
    cin >> interm;

    scambia(interM,interm); // Controlla se gli intervalli sono messi nell'ordine giusto e in caso contrario, li corregge

    numR = randomNum(interM,interm); // Risultato della funzione
    cout << "Il numero è " << numR << endl; // Output finale
    return 0;
}
