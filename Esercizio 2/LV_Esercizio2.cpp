#include <iostream>

using namespace std;

int main()

/* Traccia: 
"Il negozio "PC. & co." effettua manutenzioni di computer. Realizzare un programma che sia in grado di calcolare il costo della manutenzione sapendo che tipicamente le attività principali per la manutenzione di un pc sono:
sostituzione batteria tampone (quella che mantiene in attività l'orologio del pc e le configurazioni hardware di base);
pulizia della ventola;
aggiunta banchi di ram;
Far inserire all'utente il prezzo della batteria, della pulizia, il numero di banchi di ram aggiunti ed il costo di un banco di ram. Nel calcolare la somma dei costi si utilizzi l'operatore +=.

Infine, sapendo che il negozio effettua uno sconto del 5% sulla spesa complessiva, mostrare il costo della manutenzione."*/
{
   setlocale(LC_ALL,"");
   float prezzoB,prezzoP,prezzoRAM,costo,banchiRAM;
   const float SCONTO = 5;
   // Richiesta dei dati*
   cout << "Inserisci il prezzo della batteria (0 se non è stata cambiata): ";
   cin >> prezzoB;
   cout << "Inserisci il prezzo della pulizia della ventola (0 se non è stata pulita): ";
   cin >> prezzoP;
   cout << "Inserisci la quantità di RAM aggiunte: ";
   cin >> banchiRAM;
   cout << "Inserisci il prezzo per singolo banco di RAM: ";
   cin >> prezzoRAM;
   cout << endl;

   // Calcoli del costo totale
   costo = prezzoB + prezzoP + (banchiRAM*prezzoRAM);
   costo -= (costo*SCONTO)/100; // **

   // Output Finale
   cout << "Il prezzo della manutenzione è " << costo << endl;
   return 0;
}

    /* Legenda: 
        *(spiegazione delle variabili):
            "prezzoB": (Prezzo Batteria); Prezzo della batteria
            "prezzoP": (Prezzo Pulizia); Prezzo della pulizia della ventola
            "prezzoRAM": (Prezzo RAM); Prezzo del singolo banco di RAM
            "banchiRAM": (Banchi di RAM); Banchi di RAM aggiunti
            "costo": Costo totale
            "SCONTO": (COSTANTE); Percentuale di sconto da applicare al costo totale
    */