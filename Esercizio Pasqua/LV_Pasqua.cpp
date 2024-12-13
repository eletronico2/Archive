#include <iostream>

using namespace std;

float stipendio(float ore, float costoOre,float perc)
{
    float totOre,tot;
    totOre = ore * costoOre;
    tot-= ((totOre*perc) / 100);
    return tot;
}

int dipendenti(int numero)
{
    string professione;
    int op=0,tech=0,altro=0;
    for (int i = 1;i<= numero;i++)
    {
        cout << "Inserisci la professione: ";
        cin >> professione;
        if (professione=="operaio")
        {
            op++;
        }
        if (professione=="tecnico")
        {
            tech++;
        }
        else {
            altro++;
        }
    }
    cout << "Operai: " << op << endl << "Tecnici: " << tech << endl << "Altre professioni: " << altro << endl;
    return 0;
}

int main()
{
    setlocale(LC_ALL,"");
    int opzione,num;
    float ore,costoOre,perc,stip;
    do {
        cout << "Scegli cosa utilizzare:\n";
        cout << "1. Calcolo stipendio\n";
        cout << "2. Calcolo numero dipendenti\n";
        cout << "3. Fine lavoro\n";
        cout << "Selezione: ";
        cin >> opzione;
        if ((opzione < 0)&&(opzione > 3))
        {
            cout << "\n\tInserisci un valore valido!\n\n";
        }
    } while ((opzione < 1)&&(opzione > 3));

    switch (opzione)
    {
        case 1 : cout << "Quante ore sono?: ";
                 cin >> ore;
                 cout << "Quanto si guadagna ad ora?: ";
                 cin >> costoOre;
                 cout << "Quant'è la percentuale di tasse?: ";
                 cin >> perc;
                 stip = stipendio(ore,costoOre,perc);
                 cout << "Lo stipendio è " << perc << endl;
            break;
        case 2 : cout << "Quanti dipendenti sono?: ";
                 cin >> num;
                 dipendenti(num);
            break;
        case 3 : cout << "Chiusura del programma";
            break;
    }
    return 0;
}
