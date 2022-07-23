#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 5;
    cout << p << "\n";
    cout << *p << "\n";
    cout << p << "\n";
    delete (p);
    p = new int;
    *p = 7;
    cout << p << "\n";
    cout << *p << "\n";
    delete (p);
    return 0;
}