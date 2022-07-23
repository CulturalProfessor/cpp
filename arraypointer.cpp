#include <iostream>
using namespace std;
/*void func(int *b[3])
{

}*/
int main()
{
    int a[2][3] = {{0, 1, 2}, {3, 4, 5}};
    int(*p)[2][3] = &a;
    cout << p << "\n";
    cout << *p[0][0] << "\n";
    cout << p[0][0] + 1 << "\n";
    cout << *(p[0][0] + 1) << "\n";
    cout << p[0][0] + 2 << "\n";
    cout << *(p[0][0] + 2) << "\n";
    return 0;
}