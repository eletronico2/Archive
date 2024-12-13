#include <iostream>

using namespace std;

int main()
/* Un' impresa di trasporti calcola il costo di trasporto aggiungendo al costo fisso di 52 euro  il costo kilometrico di 0,62 euro per Km e il costo per il peso di 0,08 euro per quintale.
Consegnare un algoritmo che dato il peso della merce e la lunghezza del percorso, calcola il costo del trasporto. */
{
    setlocale(LC_ALL,"");
    float kilometri,pesoMerce,costoKmFinale,costoPesoFinale,costoFinale;
    const float COSTO_FISSO = 52;
    const float COSTO_KM = 0.62;
    const float COSTO_PESO = 0.08;
    cout << "Quanti kilometri ha percorso?: ";
    cin >> kilometri;
    cout << "Quanto pesa la merce?: ";
    cin >> pesoMerce;
    costoKmFinale = kilometri * COSTO_KM;
    costoPesoFinale = pesoMerce * COSTO_PESO;
    costoFinale = costoKmFinale + costoPesoFinale + COSTO_FISSO;
    cout << "Il costo finale del trasporto è " << costoFinale << endl;
    return 0;
}
