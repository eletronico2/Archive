#include <iostream>

using namespace std;

void inputN(int&N)
{
    do {
        cout << "Inserisci un numero: ";
        cin >> N;
        if (N<=0)
        {
            cout << "\n\tInserisci un valore valido!\n\tSuperiore a 0\n\n";
        }
    } while (N<=0);
}

void F1(int N); void F2(int N); void F3(int N); void F4(int N); void F5(int N);
void menu(int N,int&num)
{
    do {
        cout << "Scegli l'opzione del menu: \n";
        cout << "1. visualizza una riga di N asterischi;\n";
        cout << "2. visualizza una colonna di N asterischi;\n";
        cout << "3. visualizza una diagonale di N asterischi;\n";
        cout << "4. visualizza un quadrato con il lato di N asterischi;\n";
        cout << "5. visualizza un triangolo rettangolo con i due cateti di N asterischi;\n";
        cout << "0. Fine;\n";
        cout << "Selezione: ";
        cin >> num;
        if ((num>5)||(num<0))
        {
            cout << "Valore non valido!\n";
        }
    } while ((num>5)&&(num<0));

    switch (num)
    {
        case 1 : F1(N);
            break;
        case 2 : F2(N);
            break;
        case 3 : F3(N);
            break;
        case 4 : F4(N);
            break;
        case 5 : F5(N);
            break;
    }
}

void F1(int N)
{
    for (int i = 0;i < N;i++)
    {
        cout << "*";
    }
}

void F2(int N)
{
    cout << "***\n";
    for (int i = 0;i < N-2;i++)
    {
        cout << "* *\n";
    }
    cout << "***\n";
}

void F3(int N)
{
    for (int i = 0;i < N-1;i++)
    {
        for (int j = 0;j < i;j++)
        {
            cout << " ";
        }
        cout << "*\n";
    }
}

void F4(int N)
{
    for (int i = 0;i < N;i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 0;i < N;i++)
    {
        cout << "*";
        for (int j = 0;j < N-2;j++)
        {
            cout << " ";
        }
        cout << "*\n";
    }
    for (int i = 0;i < N;i++)
    {
        cout << "*";
    }
}

void F5(int N)
{
    for (int i = 1;i<= N;i++)
    {
        cout << "*";
        for (int j = 0;j<= i-2;j++)
        {
            cout << " ";
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL,"");
    int N,num;
    inputN(N); menu(N,num);
    return 0;
}
