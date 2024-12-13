#include <iostream>

using namespace std;

int main() /*
Realizzare un programma che chieda l'et� all'utente e che mostri un messaggio in base all'et�:
"Sei un esponente della generazione silenziosa" --> (da 75 anni in poi)
"Sei un Baby Boomer" --> (da 57 a 74)
"Sei un Gen X" --> (da 41 a 56)
"Sei un Millennial" --> (fino a 40 anni)
*/
{
    setlocale(LC_ALL,"");
    int anni;
    cout << "Inserire la propria et�: ";
    cin >> anni;
    if (anni>=0) {
        if (anni>75) {
            cout << "Sei un esponente della generazione silenziosa" << endl;
        }
        else{
            if ((anni>57)&&(anni<74)) {
                cout << "Sei un Baby Boomer" << endl;
            }
            else {
                if ((anni>41)&&(anni<56)) {
                    cout << "Sei un Gen X" << endl;
                }
                else {
                    cout << "Sei un Millennial" << endl;
                }
            }
        }
    }
    else {
        cout << "Inserire un et� corretta" << endl;
    }
    return 0;
}
