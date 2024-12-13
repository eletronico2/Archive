#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num1,num2,num3;
    /*
    num1=Primo numero
    num2=Secondo numero
    num3=Terzo numero
    */
    cout << "Inserisci i tre numeri" << endl;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    cout << "Num3: ";
    cin >> num3;
    if (num1==num2==num3) { // Controllo dei numeri
        cout << "Questi valori non sono validi" << endl;
    }
    else {
        if ((num1>num2)&&(num1>num3)) { // Controllo della validità della tavola pitagorica
            if ((num1*num1)==(num2*num2)+(num3*num3)) {
                cout << "Questi numeri formano una tavola pitagorica" << endl;
            }
            else {
                cout << "Questi numeri non formano una tavola pitagorica" << endl;
            }
        }
        if ((num2>num1)&&(num2>num3)) {
            if ((num2*num2)==(num1*num1)+(num3*num3)) {
                cout << "Questi numeri formano una tavola pitagorica" << endl;
            }
            else {
                cout << "Questi numeri non formano una tavola pitagorica" << endl;
            }
        }
        if ((num3>num2)&&(num3>num1)) {
            if ((num3*num3)==(num2*num2)+(num1*num1)) {
                cout << "Questi numeri formano una tavola pitagorica" << endl;
            }
            else {
                cout << "Questi numeri non formano una tavola pitagorica" << endl;
            }
        }
    }
    return 0;
}
