#include <iostream>

using namespace std;

struct s_giocatore
{
        string nome;
        int num;
};
struct s_squadra
{
        s_giocatore giocatori[11];
        string matricola;
        string nome;
        string citta;
};

void caricaSquadre(s_squadra a[],int n)
{
    for (int i = 0;i < n;i++)
    {
        cout << "Inserisci la matricola della " << i+1 << " squadra: ";
        cin >> a[i].matricola;
        cout << "Inserisci il nome della squadra: ";
        cin >> a[i].nome;
        cout << "Inserisci la città di origine: ";
        cin >> a[i].citta;
        system("CLS");
        for (int j = 0;j < n;j++)
        {
            cout << "Inserisci il nome del " << j+1 << " giocatore: ";
        }
    }
}

int main()
{
    setlocale(LC_ALL,"");
    const int dim=6;
    s_squadra torneo[dim];

    return 0;
}
