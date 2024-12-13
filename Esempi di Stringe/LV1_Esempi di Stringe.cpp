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
    cout << endl << x << endl;
    a = "Hello ";
    string b = "world!";
    cout << a + b << endl;
    a = "Hello";
    b = "hello";
    string c = "Hello";
    cout << (a==b) << endl;
    cout << (a==c) << endl;
    cout << (a!=c) << endl;
    cout << (a>b) << endl;
    cout << (b<c) << endl;
    int n=2;
    c = a.at(n);
    b = a.substr(0,4);
    cout << c << endl << b << endl;
    b = a.substr(0,1);
    cout << b << endl;
    b = a.substr(5,10);
    cout << b << endl;
    b = a.substr(0,-1);
    cout << b << endl;
    cout << b.length();
    return 0;
}
