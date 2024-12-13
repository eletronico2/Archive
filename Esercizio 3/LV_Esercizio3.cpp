#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float prezzo,prezzoF1,prezzoF2,c;
    const int SCONTO1 = 10;
    const int SCONTO2 = 20;
    cout << "Inserisci il prezzo del PC: ";
    cin >> prezzo;

    // Calcoli dei prezzi
    if (prezzo<500) 
    {
        prezzoF1 = prezzo-((prezzo*SCONTO1)/100);
    }
    else {
        prezzoF1 = prezzo-((prezzo*SCONTO2)/100);
    }
    prezzoF2 = prezzo-300;
    c = prezzoF2;
    prezzoF2 = c-((c*SCONTO1)/100);
    c = prezzoF2;
    prezzoF2 = prezzo-c;
    prezzoF2 -= (prezzo*SCONTO2)/100;
    prezzoF2 += c;

    // Controllo del negozio dove conviene
    if (prezzoF1<prezzoF2) 
    {
        c = 1;
    }
    else {
        c = 2;
    }

    // Output Finale
    cout << "Il prezzo del primo negozio è " << prezzoF1 << " il prezzo del secondo negozio è " << prezzoF2 << " conviene acquistare nel " << c << " negozio";
    return 0;
}