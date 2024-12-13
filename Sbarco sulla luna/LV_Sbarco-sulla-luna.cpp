#include <iostream>

using namespace std;

int main()  /* Chiedere all'utente il proprio nome e anno di nascita e dare a schermo un messaggio che esprime se è nato l'anno in cui l'uomo è andato sulla luna oppure quanti anni prima o quanti anni
 dopo. */
{
    setlocale(LC_ALL,"");
    string nome;
    int annoNascita;
    const int annoSbarco = 1969;
    cout << "Qual è il suo nome?: ";
    cin >> nome;
    cout << "In che anno è nato?: ";
    cin >> annoNascita;
    if (annoNascita==annoSbarco) {
        cout << nome << " è nato l'anno dello sbarco sulla Luna!" << endl;
    }
    else {
        if (annoNascita>annoSbarco) {
            cout << nome << " è nato dopo lo sbarco sulla Luna!" << endl;
        }
        else {
            cout << nome << " è nato prima dello sbarco sulla Luna!" << endl;
        }
    }
    return 0;
}
