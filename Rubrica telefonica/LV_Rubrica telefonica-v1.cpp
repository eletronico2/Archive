#include <iostream>
#include <string>

using namespace std;

int menu()
{
    int sw;
    do {
        cout << "Seleziona un opzione:\n";
        cout << "1. Crea rubrica\n";
        cout << "2. Cerca numero\n";
        cout << "3. Stampa rubrica\n";
        cout << "4. Esci\n";
        cout << "Selezione: ";
        cin >> sw;
        if ((sw<=0)||(sw>4))
        {
            cout << "Valore non valido!\n\n";
        }
    } while ((sw<=0)||(sw>4));
    return sw;
}

void creaR(int a[],string b[],int&d)
{
    for (int i = 0;i < d;i++)
    {
        cout << "Inserisci il nome del " << i+1 << " numero: ";
        cin >> b[i];
        cout << "Inserisci il numero: ";
        cin >> a[i];
    }
    return;
}

int cercaN(string b[],int n,string x)
{
    int s;
    for (int i = 0;i < n;i++)
    {
        if (x==b[i])
        {
            s=i;
            n=-1;
        }
        else {
            s=-1;
        }
    }
    return s;
}

void stampaR(int a[],string b[],int n)
{
    for (int i = 0;i < n;i++)
    {
        cout << "Nome\tNumero\n";
        cout << b[i] << '\t' << a[i] << endl;
    }
    return;
}

int main()
{
    setlocale(LC_ALL,"");
    int dim;
    bool flag=false;

    do{
        cout << "Inserisci la lunghezza della rubrica: ";
        cin >> dim;
        if (dim<=0)
        {
            cout << "Valore non valido!\n\n";
        }
    } while (dim<=0);

    int num[dim],select;
    string nomi[dim];

    do {
        select = menu();
        switch (select)
        {
            case 1 : if (flag==false)
                     {
                         creaR(num,nomi,dim);
                         flag = true;
                     }
                     else {
                        cout << "Rubrica già caricata!\n\n";
                     }
                break;
            case 2 : if (flag==true)
                     {
                         string nome;
                         cout << "Nome da cercare: ";
                         cin >> nome;
                         int app;
                         app = cercaN(nomi,dim,nome);
                         if (app!=1)
                         {
                             cout << "Numero:" << endl << num[app] << endl ;
                         }
                         else {
                            cout << "Non trovato!\n";
                         }
                     }
                break;
            case 3 : if (flag==true)
                     {
                         cout << endl;
                         stampaR(num,nomi,dim);
                         cout << endl;
                         break;
                     }
                     else {
                         cout << "Rubrica vuota!\n";
                         break;
                     }
            case 4 : select = -1;
                break;
        }
    } while (select!=-1);
    return 0;
}
