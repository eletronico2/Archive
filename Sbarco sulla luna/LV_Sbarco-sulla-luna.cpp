#include <iostream>

using namespace std;

int main()  /* Chiedere all'utente il proprio nome e anno di nascita e dare a schermo un messaggio che esprime se � nato l'anno in cui l'uomo � andato sulla luna oppure quanti anni prima o quanti anni
 dopo. */
{
    setlocale(LC_ALL,"");
    string nome;
    int annoNascita;
    const int annoSbarco = 1969;
    cout << "Qual � il suo nome?: ";
    cin >> nome;
    cout << "In che anno � nato?: ";
    cin >> annoNascita;
    if (annoNascita==annoSbarco) {
        cout << nome << " � nato l'anno dello sbarco sulla Luna!" << endl;
    }
    else {
        if (annoNascita>annoSbarco) {
            cout << nome << " � nato dopo lo sbarco sulla Luna!" << endl;
        }
        else {
            cout << nome << " � nato prima dello sbarco sulla Luna!" << endl;
        }
    }
    return 0;
}
