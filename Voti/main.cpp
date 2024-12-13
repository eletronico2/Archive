#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int nVoti,appr,c;
    float voto,media;
    const int INT_A = 0;
    const int INT_B = 10;
    c=1;
    media=0;
    cout << "Quanti voti calcolare?" << endl << ": ";
    cin >> nVoti;
    do
    {
        cout << "Inserisci il " << c << " voto: ";
        cin >> voto;
        while ((voto<INT_A)&&(voto>INT_B))
        {
            cout << "Inserisci un valore valido: ";
            cin >> voto;
        }
        media+=voto;
        nVoti--;
        c++;
    } while (nVoti!=0);
    cout << "La media dei voti è " << media << endl;
    c=media*0.5;
    media++;
    if (c>=media)
    {
        appr=media;
    }
    else
    {
        appr=media-1;
    }
    cout << "Approssimazione consigliata: " << appr << endl;
    return 0;
}
