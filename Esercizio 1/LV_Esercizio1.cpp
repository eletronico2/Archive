#include <iostream>

using namespace std;

int main ()

/* Traccia: 
"Una coppia di persone vuole effettuare un bilancio tra i soldi guadagnati nell'ultimo mese e i soldi spesi. In particolare, il programma deve poter:
Far inserire il nome del primo componente della coppia (ad esempio Maria Rossi);
Far inserire un valore numerico che indica la somma di denaro guadagnata dal primo componente (ad esempio 1300);
Far inserire un valore numerico che indica la somma di denaro spesa dal primo componente (ad esempio 700);
 Far inserire il nome del secondo componente della coppia (ad esempio Luca Galli);
Far inserire un valore numerico che indica la somma di denaro guadagnata dal secondo componente (ad esempio 1100);
Far inserire un valore numerico che indica la somma di denaro spesa dal secondo componente (ad esempio 1200).
Il programma deve poter visualizzare a schermo un output in grado di mostrare la somma dei soldi guadagnati, la somma dei soldi spesi e l'attuale bilancio (dato dai soldi guadagnati meno i soldi spesi). L'output deve essere del tipo: 
"Maria Rossi e Luca Galli hanno guadagnato 2400, hanno speso 1900 ed hanno un bilancio di 500."
*/

{
    setlocale(LC_ALL,"");
    string nome1,cognome1,nome2,cognome2;
    float guad1,spesa1,guad2,spesa2,guadF,spesaF,bilancio;
    // Richiesta dei nomi dei utenti
    cout << "Inserisci il nome del primo utente" << endl;
    cout << "Nome: ";
    cin >> nome1;
    cout << "Cognome: ";
    cin >> cognome1;
    cout << "Inserisci il nome del secondo utente" << endl;
    cout << "Nome: ";
    cin >> nome2;
    cout << "Cognome: ";
    cin >> cognome2;
    cout << endl;

    // Richiesta dei guadagni dei utenti
    cout << "Inserisci il guadagno del primo utente: ";
    cin >> guad1;
    cout << "Inserisci il guadagno del secondo utente: ";
    cin >> guad2;
    cout << endl;

    //Richiesta della spesa dei utenti
    cout << "Inserisci la spesa del primo utente: ";
    cin >> spesa1;
    cout << "Inserisci la spesa del secondo utente: ";
    cin >> spesa2;
    cout << endl;

    // Calcoli* 
    guadF = guad1+guad2;
    spesaF = spesa1+spesa2;
    bilancio = guadF-spesaF;

    // Output Finale
    cout << nome1 << " " << cognome1 << " e " << nome2 << " " << cognome2 << " hanno guadagnato  " << guadF << ", hanno speso " << spesaF << " e hanno un bilancio di " << bilancio << endl;
    return 0; 
}

    /* Legenda:
        *(spiegazione delle variabili): 
            "guad*": variabili contenitore del guadagno di un singolo utente
            "spesa*": variabili contenitore della spesa di un singolo utente
            "guadF": Guadagno Finale; variabile di calcolo del guadagno finale tra gli utenti
            "spesaF": Spesa Finale; variabile di calcolo della spesa finale tra gli utenti
            "bilancio": variabile di calcolo del bilancio totale dei utenti 
    */