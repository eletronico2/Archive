#include <iostream>

using namespace std;

int main ()
/*
Per partecipare a un rodeo il singolo concorrente può scegliere se cavalcare 1) un toro (coefficiente
di difficoltà 1,75), 2) un torello (coeff. 1,35), 3) un puledro (coeff. 1). La prova viene valutata da tre
giudici che assegnano ognuno un voto. Al concorrente viene assegnato un punteggio, ottenuto
moltiplicando la media dei voti espressi dai giudici per il coefficiente di difficoltà. Inserito
dall’esterno il tipo di animale scelto e i tre voti dei giudici visualizzare il punteggio raggiunto.
*/
{
    setlocale(LC_ALL,"");
    int rodeo,g1,g2,g3,punteggio;
    /*
    rodeo=Numero del toro
    g1=Voto del primo giudice
    g2=Voto del secondo giudice
    g3=Voto del terzo giudice
    punteggio=Punteggio finale
    */
    cout << "Inserire il numero del toro da calcarcare:" << endl;
    cout << "1. Toro (1.75 difficoltà)" << endl;
    cout << "2. Torello (1.35 difficoltà)" << endl;
    cout << "3. Puledro (1 difficoltà)" << endl;
    cout << ": ";
    cin >> rodeo;
    cout << "Inserire il punteggio dei giudici:" << endl;
    cout << "Giudice 1: ";
    cin >> g1;
    cout << "Giudice 2: ";
    cin >> g2;
    cout << "Giudice 3: ";
    cin >> g3;
    switch (rodeo)
    {
    case 1 :
        rodeo = 1.75;
        punteggio = (g1+g2+g3)*rodeo;
        cout << "Il punteggio è " << punteggio << endl;
        break;
    case 2 :
        rodeo = 1.35;
        punteggio = (g1+g2+g3)*rodeo;
        cout << "Il punteggio è " << punteggio << endl;
        break;
    case 3 :
        rodeo = 1;
        punteggio = (g1+g2+g3)*rodeo;
        cout << "Il punteggio è " << punteggio << endl;
        break;

    default:
        cout << "Inserire un valore valido" << endl;
        break;
    }
    return 0;
}
