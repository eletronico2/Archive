#include <iostream>

using namespace std;

void altezza(float&A)
{
    do {
        cout << "Inserisci l'altezza: ";
        cin >> A;
        if (A<=0)
        {
            cout << "\n\tInserisci un valore valido!\n\n";
        }
    } while (A<=0);
}

void peso(float&P)
{
    do {
        cout << "Inserisci il peso: ";
        cin >> P;
        if (P<=0)
        {
            cout << "\n\tInserisci un valore valido!\n\n";
        }
    } while (P<=0);
}

float BMI(float A,float P)
{
    float BMP=P/(A*A);
    return BMP;
}

int main()
{
    setlocale(LC_ALL,"");
    float a,p,bmi;
    altezza(a);
    peso(p);
    bmi = BMI(a,p);
    cout << "L'indice di massa corporea è " << bmi << endl;
    return 0;
}