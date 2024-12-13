#include <iostream>

using namespace std;

int sommaArray(int a[],int n) // Funzione di somma dei valori dell'Array
{
    int somma = 0,c = 1; // Valori contatore e somma
    for (int i = 0;i < n;i++) // FOR della somma dei valori dell'Array
    {
        somma+=a[i]; // Somma i numeri dell'Array
        if (somma<= 200) // Controlla la somma
        {
            c++; // Contatore
        }
    }
    if (somma > 200) // Controlla che la somma finale superi 200
    {
        return c; // Ritorna il contatore dei numeri
    }
    else {
        return -1; // Ritorna -1
    }
}

int main()
{
    setlocale(LC_ALL,"");
    int num,valore; // Variabili della dimensione dell'Array e il risultato della funzione
    do {
        cout << "Inserisci la dimensione dell'Array: ";
        cin >> num;
        if (num<=0)
        {
            cout << "Valore non valido!\n\n";
        }
    } while (num<=0); // Controllo della dimensione dell'Array
    int arr[num]; // Dichiara l'Array
    for (int i = 0;i < num;i++)
    {
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> arr[i];
    } // Caricamento dell'Array
    valore = sommaArray(arr,num); // Calcolo e risultato della funzione
    cout << "Gli elementi sono " << valore; // Output finale
    return 0;
}
