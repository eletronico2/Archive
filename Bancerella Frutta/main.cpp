#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int nClienti,prod=0;
    float guadagno;
    const float C_ARANCE = 0.40;
    const float C_BANANE = 0.60;
    const float C_MELE = 0.25;

    do {
        cout << "Quanti clienti sono?: ";
        cin >> nClienti;
        if (nClienti<=0) {
            cout << "\n Inserisci un valore valido\n Il valore deve essere superiore a 0\n\n";
        }
    } while (nClienti<=0);

    int frutti[nClienti];

    for (int i=1; i<= nClienti; i++) {
        do {
            cout << "Cosa ha preso " << i << " cliente?  [1:arance|2:banane|3:mele]:";
            cin >> prod; cout << endl;
            if ((prod<=0)||(prod>3)) {
                cout << "\n Inserisci un valore valido\n Il valore deve essere compreso fra 1 e 3\n\n";
            }
        } while ((prod<=0)||(prod>3));
        frutti[i-1] = prod;
    }
    for (int i=0; i < nClienti; i++) {
        if (frutti[i]==1) {
            guadagno+= frutti[i]*C_ARANCE;
        }
        if (frutti[i]==2) {
            guadagno+= frutti[i]*C_BANANE;
        }
        if (frutti[i]==3) {
            guadagno+= frutti[i]*C_MELE;
        }
        cout << endl << guadagno;
    }
    cout << endl << guadagno;
    return 0;
}
