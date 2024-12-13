# include <iostream>

using namespace std;

int main ()
{
    setlocale(LC_ALL,"");
    int num1,num2,i;
    cout << "Inserisci i numeri" << endl;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    if (num1!=num2) 
     {
        if (num1>num2) 
         {
            cout << num1 << " " << num2;
         }
        else 
         {
            i = num1;
            num1 = num2;
            num2 = i;
            cout << num1 << " " << num2;
         }
     }
    else 
     {
        cout << "Inserire dei valori validi!" << endl;
     }
}