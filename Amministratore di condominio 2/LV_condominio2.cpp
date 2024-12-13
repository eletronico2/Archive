#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float Mq,speseFisse,speseAscensore,speseTotali,rata;
    int nAppartamento;
    const float costoMq = 5;
    const float tassaPerc = 7;
    cout << "Quanto costano le spese fisse?: ";
    cin >> speseFisse;
    cout << "In che piano è l'appartamento?: ";
    cin >> nAppartamento;
    cout << "Quanti metri quadrati sono l'appartamento?: ";
    cin >> Mq;
    cout << "Quante sono le spese dell'ascensore?: ";
    cin >> speseAscensore;
    if (nAppartamento<3) {
        speseTotali = (costoMq*Mq) + speseFisse;
        rata = (speseTotali*tassaPerc/100)+speseTotali;
    }
    else {
        speseTotali = (costoMq*Mq) + speseFisse + speseAscensore;
        rata = (speseTotali*tassaPerc/100)+speseTotali;
    }
    cout << "La rata da far pagare è " << rata << endl;
    return 0;
}
