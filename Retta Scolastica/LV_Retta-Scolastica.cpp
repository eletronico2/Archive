#include <iostream>

using namespace std;

int main()
/*
Un istituto scolastico privato richiede il pagamento mensile di una retta che può avere sconti. Dato
il nome dello studente e il valore della retta, calcolare il costo totale mensile considerando che: se
lo studente appartiene a una famiglia con un numero di componenti fino a 4 ha uno sconto del 5%, è
che è del 10%invece se il numero di componenti è superiore a 4. Comunicare l’importo finale da
pagare.
*/
{
    setlocale(LC_ALL,"");
    float retta,pagamento,membri;
    const float SCONTO_4_M = 5; const float SCONTO_S4_M = 10;
    /*
    retta=Retta scolastica mensile
    SCONTO_4_M=Percentuale di sconto fino a 4 membri della famiglia iscritti
    SCONTO_S4_M=Percentuale di sconto per più di 4 membri della famiglia iscritti
    membri=Membri della famiglia iscritti
    pagamento=Pagamento totale della retta per lo sconto applicato
    */
    cout << "Quanti membri della famiglia sono iscritti?: ";
    cin >> membri;
    cout << "Quanto si paga di retta?: ";
    cin >> retta;
     if ((membri>0)&&(retta>0)) // Controllo delle variabili
     {
         // Scelta dello sconto
         if (membri<=4)
         {
             pagamento = retta-((retta*SCONTO_4_M)/100);
         }
         else
         {
             pagamento = retta-((retta*SCONTO_S4_M)/100);
         }
         cout << "Il pagamento è di " << pagamento << endl;
     }
     else
     {
         cout << "Inserisci valori validi" << endl;
     }
    return 0;
}
