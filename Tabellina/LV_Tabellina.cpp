#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num,i,o;
    cout << "Inserisci un numero: ";
    cin >> num;
    cout << endl << "Tabellina del numero " << num << endl;
    for (i=1;i<=10;i++)
    {
        o=i*num;
        cout << num << " X " << i << " = " << o << endl;
    }
    return 0;
}
