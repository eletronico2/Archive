#include <iostream>

using namespace std;

void dimensioneA(int&n)
{
    do {
        cout << "Inserisci la dimensione dell'Array: ";
        cin >> n;
        if (n<=0)
        {
            cout << "Valore non valido!\n\n";
        }
    } while (n<=0);
}

void caricaArray(int a[],int n)
{
    for (int i = 0;i < n;i++)
    {
        cout << "Inserisci il " << i+1 << " numero: ";
        cin >> a[i];
    }
    return;
}

void media(int a[],int n)
{
    int media,maxN = a[0],minN = a[0];
    for (int i = 0;i < n;i++)
    {
        media+= a[i];
        if (maxN < a[i])
        {
            maxN = a[i];
        }
        if (minN > a[i])
        {
            minN = a[i];
        }
    }
    media/= n;
    cout << "La media è " << media << endl;
    cout << "Il valore massimo è " << maxN << endl;
    cout << "Il valore minimo è " << minN << endl;
    return;
}

int main()
{
    int dim;
    dimensioneA(dim);
    int arr[dim];
    caricaArray(arr,dim);
    media (arr,dim);
    return 0;
}
