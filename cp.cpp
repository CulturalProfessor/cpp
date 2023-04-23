#include <iostream>

using namespace std;

int sumofelements(int a[], int size)
{
    int sum = 0;
    cout << "size of a " << sizeof(a) << " "
         << "size of a[o] " << sizeof(a[0]) << "\n";
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int a[] = {9, 8, 7, 6, 5};
    int size = (sizeof(a) / sizeof(a[0]));
    int total = sumofelements(a, size);
    cout << "sum of elements=" << total << "\n";
    cout << "size of a " << sizeof(a) << " "
         << "size of a[o] " << sizeof(a[0]) << "\n";
    return 0;
}