#include <iostream>

using namespace std;

int main()  /* I dipendenti di una ditta possono fare la richiesta di rimborso spese per i  viaggi di lavoro.  Leggere il nominativo del dipendente, la spesa e il tipo rimborso richiesto (valori 1 o 2).
 Il rimborso viene calcolato a partire dalla spesa sostenuta aumentata del 20% e si aggiunge un ulteriore extra in base al tipo di rimborso indicato. Il  rimborso aggiuntivo è del 10%, se il tipo di
 rimborso scelto è 1, e del 30%, se il tipo è 2. Calcolare e comunicare al dipendente il rimborso totale che gli spetta. */
{
    setlocale(LC_ALL,"");
    string nom1,nom2; // Nominativo
    float spesa,rimborsoTot,spesaTot;
    int rimborsoV;
    const float PERC_SPESA = 20;
    const float RIMBORSO_1 = 10;
    const float RIMBORSO_2 = 30;
    cout << "Inserire il nome: ";
    cin >> nom1;
    cout << "Inserire il cognome: ";
    cin >> nom2;
    cout << "Inserire la spesa: ";
    cin >> spesa;
    spesaTot = (spesa*PERC_SPESA/100)+spesa;
    cout << "Inserire il tipo di rimborso" << endl << "1 o 2" << endl << ": ";
    cin >> rimborsoV;
    if (rimborsoV>2) {
        cout << "Inserire il numero corretto" << endl;
    }
    else {
        if (rimborsoV==1) {
            rimborsoTot = (spesaTot*RIMBORSO_1/100)+spesaTot;
            cout << "Il rimborso di " << nom1 << " " << nom2 << " è di " << rimborsoTot << endl;
        }
        else {
            rimborsoTot = (spesaTot*RIMBORSO_2/100)+spesaTot;
            cout << "Il rimborso di " << nom1 << " " << nom2 << " è di " << rimborsoTot << endl;
        }
    }
    return 0;
}
