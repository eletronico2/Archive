#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    string nome,maxNome;
    int anni,mAnni,c;
    float voto,maxVoto;
    c=1;
    mAnni=0;
    cout << "Inserisici il nome del " << c << " studente" << endl << ": ";
    cin >> nome;
    cout << "Inserisici il voto del " << c << " studente" << endl << ": ";
    cin >> voto;
    cout << "Inserisci l'età del " << c << " studente" <<  endl << ": ";
    cin >> anni;
    c++;
    maxVoto=voto;
    maxNome=nome;
    do
    {
        cout << "Inserisici il nome del " << c << " studente" << endl << ": ";
        cin >> nome;
        cout << "Inserisici il voto del " << c << " studente" << endl << ": ";
        cin >> voto;
        while ((voto<0)||(voto>10))
        {
            cout << "Inserisci un valore valido: ";
            cin >> voto;
        }
        cout << "Inserisci l'età del " << c << " studente" <<  endl << ": ";
        cin >> anni;
        while ((anni<6)||(anni>20))
        {
            cout << "Inserisci un valore valido: ";
            cin >> anni;
        }
        mAnni+=anni;
        if (maxVoto<voto)
        {
            maxVoto=voto;
            maxNome=nome;
        }
        c++;
    } while (c!=10);
    mAnni/=10;
    cout << "La media dell'età dei alunni è " << mAnni << endl;
    cout << "L'alunno con il voto massimo è " << maxNome << endl;
    cout << "Il voto massi è " << maxVoto;
    return 0;
}
