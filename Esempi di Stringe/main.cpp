#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "Hello world!";
    int x;
    x = a.length();
    cout << x;
    x = a.empty();
    cout << endl << x;
    return 0;
}
