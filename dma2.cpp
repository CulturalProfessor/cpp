#include <iostream>
using namespace std;
// n is size of array
void malloc(int n)
{
    // malloc initializes pointer to garbage
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }
    // relloc initializes same pointer to new size at same address
    int *b = (int *)realloc(a, 2 * n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    // from n to 2n there are garbage values
    for (int i = 0; i < 2 * n; i++)
    {
        cout << a[i] << "\n";
    }
    // frees up allocated memory
    free(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }
}
void calloc(int n)
{
    // calloc initializes pointer to zero
    int *a = (int *)calloc(n * sizeof(int), 4);
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }
    // relloc initializes same pointer to new size at same address
    int *b = (int *)realloc(a, 2 * n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    // from n to 2n there values are zero
    for (int i = 0; i < 2 * n; i++)
    {
        cout << a[i] << "\n";
    }
    // frees up allocated memory
    free(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }
}
int main()
{
    cout << "enter size of array\n";
    int n;
    cin >> n;
    malloc(n);
    cout << "\n";
    calloc(n);
    return 0;
}