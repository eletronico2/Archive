#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num;
    cout << "Inserisci un numero da 1 a 50" << endl;
    cout << ": ";
    cin >> num;
     if ((num>=1)&&(num<=50)) {
         if ((num>10)&&(num<30)) {
             num = num*3;
             if (num>50) {
                 cout << "Hai vinto!" << endl;
                 cout << "Il numero uscito è " << num << "!" << endl;
             }
             else {
                 cout << "Hai perso!" << endl;
                 cout << "Il numero uscito è " << num << " ritenta!" << endl;
             }
         }
        else {
          if (num>30) {
             num = num*4;
             cout << "Hai perso!" << endl;
             cout << "Il numero uscito è " << num << " ritenta!" << endl;
          }
         }
         if (num<=10) {
             cout << "Ritenta, sarai più fortunato!" << endl;
             cout << "Il numero uscito è " << num << "!" << endl;
         }
     }
     else {
         cout << "Inserisci un valore valido!" << endl;
     }
    return 0;
}
