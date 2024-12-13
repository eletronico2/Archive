# include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"");
    float guadFinale,trattFin,dizionari,stipendio;
    const float GUADAGNO = 1500;
    const float GUAD_ADD = 200;
    const float TRATTENUTA = 18;
    cout << "Quanti dizionari ha venduto?: ";
    cin >> dizionari;
    guadFinale = (GUAD_ADD * dizionari) + GUADAGNO;
    trattFin = (guadFinale * TRATTENUTA) / 100;
    stipendio = guadFinale - trattFin;
    cout << "Lo stipendio è " << stipendio << endl;
    return 0;
}