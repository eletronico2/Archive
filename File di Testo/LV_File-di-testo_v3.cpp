#include <iostream>
#include <fstream>

using namespace std;

int caricaDim()
{
    int n;
    do {
        cout << "Quanti studenti ci sono? ";
        cin >> n;
        if (n<=0)
        {
            cout << "Valore non valido!\n\n";
        }
    } while (n<=0);
    return n;
}

void caricaFile(string nome,int n)
{
    fstream classeFile(nome.c_str(),ios::out);
    if (!classeFile)
    {
        cout << "File non trovato!";
    }
    else {
        for (int i = 0;i < n;i++)
        {
            cout << "Inserisci il nome del " << i+1 << " alunno: ";
            cin >> nome;
            classeFile << nome << endl;
        }
        cout << "File caricato con successo!";
    }
    classeFile.close();
    return;
}

void caricaFileA(string nome,string a[],int n)
{
    fstream classeFile(nome.c_str(),ios::out);
    if (!classeFile)
    {
        cout << "File non trovato!";
    }
    else {
        for (int i = 0;i < n;i++)
        {
            classeFile << a[i] << endl;
        }
        cout << "File caricato con sucesso!";
    }
    classeFile.close();
    return;
}

void caricaArr(string nome,string a[],int n)
{
    fstream classeFile(nome.c_str(),ios::in);
    for (int i = 0;i < n;i++)
    {
        classeFile >> a[i];
    }
    classeFile.close();
    return;
}

void stampaArr(string nome,string a[],int n)
{
    for (int i = 0;i < n;i++)
    {
        cout << a[i] << endl;
    }
    return;
}

void ordina(string a[],int n)
{
    string temp;
    for (int i = 0;i < n-1;i++)
    {
        for (int j = i+1;j < n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return;
}

int main()
{
    string nome;
    cout << "nome del file: ";
    cin >> nome;
    setlocale(LC_ALL,"");
    int dim=caricaDim();
    cout << endl;
    caricaFile(nome,dim);
    string arr[dim];
    cout << endl;
    caricaArr(nome,arr,dim);
    stampaArr(nome,arr,dim);
    ordina(arr,dim);
    cout << endl;
    stampaArr(nome,arr,dim);
    cout << endl;
    caricaFileA(nome,arr,dim);
    return 0;
}
