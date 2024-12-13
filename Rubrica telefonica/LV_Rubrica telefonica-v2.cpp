#include <iostream>
#include <string>

using namespace std;

int menu(bool b,int t)
{
    int sw;
    do {
        cout << "Seleziona un opzione:\n";
        if (b==false)
        {
            cout << "1. Crea rubrica\n";
        }
        else {
            if (t!=0)
            {
                cout << "1. Continua la rubrica\n";
            }
            else {
                cout << "X. Rubrica già caricata!\n";
            }
        }
        cout << "2. Cerca numero\n";
        cout << "3. Stampa rubrica\n";
        cout << "4. Ordina rubrica\n";
        cout << "0. Esci\n";
        cout << "Selezione: ";
        cin >> sw;
        if ((sw<0)||(sw>4))
        {
            cout << "Valore non valido!\n\n";
        }
    } while ((sw<0)||(sw>4));
    return sw;
}

void creaR(int a[],string b[],int d,int&t)
{
    t = d;
    for (int i = 0;i < d;i++)
    {
        char s=' ';
        cout << "Inserisci il nome del " << i+1 << " numero: ";
        cin >> b[i];
        cout << "Inserisci il numero: ";
        cin >> a[i];
        while ((i!=d-1)&&(s!='a')&&(s!='x'))
        {
            cout << "[a] Continua\t[x] Chiudi\n";
            cin >> s;
            if ((s!='a')&&(s!='x'))
            {
                cout << "Valore non valido!\n\n";
            }
        }
        if (s=='x')
        {
            d = -1;
        }
        t--;
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

void ordinamentoR(int a[],string b[],int d)
{
    for (int i = 0;i < d;i++)
    {
        for (int j = 0;j < d;j++)
        {
            if (b[i]>b[j])
            {
                string tmpS = b[i];
                cout << "\nDebug: " << tmpS;
                b[i] = b[j];
                cout << "\nDebug: " << b[i];
                b[j] = tmpS;
                cout << "\nDebug: " << b[j];
                int tmp = a[i];
                cout << "\nDebug: " << tmp;
                a[i] = a[j];
                cout << "\nDebug: " << a[j];
                a[j] = tmp;
                cout << "\nDebug: " << a[i];
            }
        }
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
    int temp;
    int app;

    do {
        select = menu(flag,temp);
        switch (select)
        {
            case 1 : if (flag==false)
                     {
                         creaR(num,nomi,dim,temp);
                         flag = true;
                     }
                     else {
                         if (temp!=0)
                         {
                             app = temp;
                             creaR(num,nomi,app,temp);
                         }
                         else {
                             cout << "\n\tRubrica gia caricata!\n\n";
                         }
                     }
                break;
            case 2 : if (flag==true)
                     {
                         string nome;
                         cout << "Nome da cercare: ";
                         cin >> nome;
                         app = cercaN(nomi,dim,nome);
                         if (app!=-1)
                         {
                             cout << "Numero:" << endl << num[app] << endl ;
                         }
                         else {
                            cout << "Non trovato!\n\n";
                         }
                     }
                     else {
                         cout << "Rubrica vuota!\n\n";
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
                         cout << "Rubrica vuota!\n\n";
                         break;
                     }
            case 4 : if (flag==true)
                     {
                         ordinamentoR(num,nomi,dim);
                         stampaR(num,nomi,dim);
                     }
                     else {
                         cout << "Rubrica vuota!\n\n";
                     }
                break;
            case 0 : select = -1;
                break;
        }
    } while (select!=-1);
    return 0;
}
