#include <iostream>
using namespace std;
// it returns value
int add(int *a, int *b)
{
    int c = (*a) + (*b);
    return (c);
}
// it returns address of variable in other function
int *add2(int *a, int *b)
{
    // value should stored on heap if address is to be returned,can also do it with malloc
    int *c = new int;
    *c = (*a) + (*b);
    return (c);
}
int add3(int a, int b)
{
    return (a + b);
}
int compare(int a, int b)
{
    if (a > b)
        return 1;
    else
        return -1;
}
// compare function address is passed
void bubblesort(int *A, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1; j++)
            if (compare(A[j], A[j + 1]) > 0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
}
int main()
{
    int a = 2, b = 4;
    int c = add(&a, &b);
    cout << c << "\n";
    int *x = add2(&a, &b);
    cout << *x << "\n";
    int y;
    // it returns address of function
    int (*p)(int, int);
    p = &add3;
    y = (*p)(2, 3);
    cout << y << "\n";
    int A[] = {-31, 22, -1, 50, -6, 4};
    bubblesort(A, 6, compare);
    for (int i = 0; i < 6; i++)
    {
        cout << A[i] << "\n";
    }

    return 0;
}