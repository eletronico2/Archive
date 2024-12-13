#include <iostream>

using namespace std;

int main()
/* Scrivi un programma che permetta all’utente di inserire 3 numeri e, nel caso venga inserito un numero negativo, lo trasformi in positivo. Quindi calcoli e visualizzi la media dei numeri.
Inoltre deve individuare e visualizzare quanti sono i numeri pari e quanti quelli dispari inseriti */
{
    setlocale(LC_ALL,"");
    int num1,num2,num3,i;
    float media;
    /*
    num1=Primo numero
    num2=Secondo numero
    num3=Terzo numero
    media=La media dei 3 numeri
    i=Contatore
    */
    i=0;
    cout << "Inserisci i numeri" << endl;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    cout << "Num3: ";
    cin >> num3;
    if ((num1<0)||(num2<0)||(num3<0)) { // Controllo dei numeri dispari.
        if (num1<0) {
            num1 = num1*-1; // Conversione in positivo
        }
        if (num2<0) {
            num2 = num2*-1;
        }
        if (num3<0) {
            num3 = num3*-1;
        }
    }
    media = (num1+num2+num3)/3.0;
    cout << "La media è " << media << endl;
    if (num1%2==0) {
        i=i+1;
    }
    if (num2%2==0) {
        i=i+1;
    }
    if (num3%2==0) {
        i=i+1;
    }
    cout << "I numeri pari sono " << i << endl;
    i=3-i;
    cout << "I numeri dispari sono " << i << endl;
    return 0;
}
