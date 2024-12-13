#include <iostream>

using namespace std;

int main()
// Dato in input un numero compreso tra 0 e 50, determinare se è un numero pari   multiplo di 5.
{
    setlocale(LC_ALL,"");
    int num;
    cout << "Inserisci il numero: ";
    cin >> num;
    /*
    num=Numero da controllare
    */
     if ((num>=0)&&(num<=50)) // Controllo del numero
     {
         if (num%2==0)
         {
             cout << "Il numero è pari" << endl;
         }
         if (num%5==0)
         {
             cout << "Il numero è multiplo di 5" << endl;
         }
         if ((num%2!=0)&&(num%5!=0))
         {
             cout << "Il numero non è né pari né multiplo di 5" << endl;
         }
     }
     else
     {
         cout << "Il numero non è valido" << endl;
     }
    return 0;
}
