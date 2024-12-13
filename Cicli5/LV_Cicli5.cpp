#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int o, i;
    const int n = 5;
    cout << "I multipli di 5 inferiori a 100: " << endl;
    cout << endl;
    i=1;
    do
    {
        o = n*i;
        i++;
        cout << o << endl;
    } while ((o<95)&&(o!=100));
    return 0;
}
