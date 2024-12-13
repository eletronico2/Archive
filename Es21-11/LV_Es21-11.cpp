#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int num;
    cout << "Inserisci un numero: " << endl;
    cout << "1. Brontolo" << endl;
    cout << "2. Cucciolo" << endl;
    cout << "3. Dotto" << endl;
    cout << "4. Eolo" << endl;
    cout << "5. Gongolo" << endl;
    cout << "6. Mammolo" << endl;
    cout << "7. Pisolo" << endl;
    cout << "8. Biancaneve" << endl;
    cout << ": ";
    cin >> num;
    switch (num)
    {
        case 1 : cout << "Brontolo" << endl;
         break;
        case 2 : cout << "Cucciolo" << endl;
         break;
        case 3 : cout << "Dotto" << endl;
         break;
        case 4 : cout << "Brontolo" << endl;
         break;
        case 5 : cout << "Cucciolo" << endl;
         break;
        case 6 : cout << "Dotto" << endl;
         break;
        case 7 : cout << "Brontolo" << endl;
         break;
        default : cout << "Biancaneve" << endl;
    }
    return 0;
}
