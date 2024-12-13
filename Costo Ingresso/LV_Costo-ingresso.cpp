#include <iostream>

using namespace std;

int main()  /* Chiedere l'età della persona e visualizzare il costo dell'ingresso, sapendo che se la persona ha meno di 7 anni paga 5€ altrimenti paga 12€. */
{
    setlocale(LC_ALL,"");
    int anni/*Età della persona*/;
    const float costoM7Anni = 5; // Costo in euro dell’ingresso se si ha meno di 7 anni
    const float costoIngresso = 12; // Costo in euro dell’ingresso
    cout << "Quanti anni hai?: ";
    cin >> anni;
    if (anni>0) {
        if (anni<7) {
            cout << "Il costo del biglietto è " << costoM7Anni << " euro" << endl;
        }
        else {
            cout << "Il costo del biglietto è " << costoIngresso << " euro" << endl;
        }
    }
    return 0;
}
