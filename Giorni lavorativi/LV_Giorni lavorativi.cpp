#include <iostream>


using namespace std;

/* Un dipendente viene assunto da aziende diverse in vari periodi. 
L’applicazione richiede il numero di contratti da inserire. 
Successivamente viene richiesto (tante volte quanti sono i contratti) di inserire la durata di ogni 
contratto in giorni.
L’applicazione deve fornire in output il numero di anni, mesi e giorni lavorati.
Per semplificare la conversione in mesi/anni: 
1 mese = 30 giorni
1 anno = 365 giorni

Da aggiungere:
individuare il contratto con durata massima e minima
prevedere di generalizzare l'applicazione per N dipendenti (per ogni dipendente stampare il 
contratto con durata minima e massima) */

int main()
 {
    setlocale(LC_ALL,"");
    int contratti,durataC,durataT;
    
    do
     {
        cout << "Quanti contratti sono?: ";
        cin >> contratti;
        if (contratti<=0)
         {
            cout << "Inserisci un valore valido: ";
            cin >> contratti;
         }
     } while (contratti<=0);
    
    durataT = 0;
    for (int i = 1; i<=contratti; i++)
     {
        cout << "Inserisci la durata del " << i << " contratto (in giorni): ";
        cin >> durataC;
        durataT += durataC;
     }
    
    cout << "La durata totale dei contratti è " << durataT << endl;
    return 0;

 }
