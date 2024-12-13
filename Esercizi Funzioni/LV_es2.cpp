#include <iostream>

using namespace std;

void mesi(int&mese)
{
    switch (mese) {
        case 1 : cout << "Gennaio\n";
            break;
        case 2 : cout << "Febbraio\n";
            break;
        case 3 : cout << "Marzo\n";
            break;
        case 4 : cout << "Aprile\n";
            break;
        case 5 : cout << "Maggio\n";
            break;
        case 6 : cout << "Giugno\n";
            break;
        case 7 : cout << "Luglio\n";
            break;
        case 8 : cout << "Agosto\n";
            break;
        case 9 : cout << "Settembre\n";
            break;
        case 10 : cout << "Ottobre\n";
            break;
        case 11 : cout << "Novembre\n";
            break;
        case 12 : cout << "Dicembre\n";
            break;
    }
}

int main()
{
    setlocale(LC_ALL,"");
    int mese;
    do {
        cout << "Inserisci il numero del mese:\n";
        cout << "1. Gennaio\n";
        cout << "2. Febbraio\n";
        cout << "3. Marzo\n";
        cout << "4. Aprile\n";
        cout << "5. Maggio\n";
        cout << "6. Giugno\n";
        cout << "7. Luglio\n";
        cout << "8. Agosto\n";
        cout << "9. Settembre\n";
        cout << "10. Ottobre\n";
        cout << "11. Novembre\n";
        cout << "12. Dicembre\n";
        cout << "Selezione: ";
        cin >> mese;
        if ((mese<=0)||(mese>12))
        {
            cout << "Valore non valido!\n";
        }
    } while ((mese<=0)||(mese>12));
    mesi(mese);
    return 0;
}