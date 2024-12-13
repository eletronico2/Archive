#include <iostream>

using namespace std;

int autovelox(int v)
{
    if (v>120)
    {
        return 1;
    }
      else
    {
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL,"");

    int N,vel,velR,velT=0;

    do
    {
        cout << "Quante auto sono passate: ";
        cin >> N;
        if (N<= 0)
        {
            cout << "\n\tInserire un valore valido!\n\tIl Valore deve essere superiore di 0\n\n";
        }
    }  while (N<= 0);

    for (int i = 1;i<= N;i++)
    {
        do
        {
            cout << "Inserisci la velocità della " << i << " macchina: ";
            cin >> vel;
            if (vel<= 10)
            {
                cout << "\n\tInserisci un valore valido!\n\n";
            }
        }  while (vel<= 10);
        velR = autovelox(vel);
        if (velR==1)
        {
            cout << "\t[La macchina ha superato la velocità]\n";
        }
          else
        {
            cout << "\t[La macchina non ha superato la velocità]\n";
        }
        velT+= velR;
    }

    if (velT==0)
    {
        cout << "\nNessuna macchina ha superato il limite!\n";
    }
    if (velT==1)
    {
        cout << "\nUna macchina ha superato la velocità\n";
    }
      else
    {
        cout << "\nLe macchine che hanno superato la velocità sono " << velT << endl;
    }

    return 0;
}
