#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int N;
    srand (time(0));
    do
    {
        cout << "Inserisci la dimensione dell'Array: ";
        cin  >> N;
        if (N<0)
        {
            cout << "Inserisci un valore valido!" << endl << endl;
        }
    } while (N<0);

    int nums[N];
    for (int i = 0; i<N; i++)
    {
        nums[i] = (rand()%100)+1;
    }
    for (int i = 0; i<N; i++)
    {
        cout << nums[i] << endl;
    }
    return 0;
}
