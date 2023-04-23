#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, s = 0;
        cin >> n;
        int k = (n) / 5;
        for (int i = k * 5; i <= n;)
        {
            if (n - i >= 3 && s != 1)
            {
                i = i + 3;
                k++;
                s = 1;
            }
            else if (n - i >= 2 && s != 2)
            {
                i = i + 2;
                k++;
                s = 2;
            }
            else
            {
                i++;
                k++;
                s = 3;
                break;
            }
        }
        if (n == 1)
            cout << 0 << "\n";
        else if (n == 2 || n == 3)
            cout << 1 << "\n";
        else if (n == 4)
            cout << 1 << "\n";
        else if (n == 5)
            cout << 2 << "\n";
        else
            cout << k * 2 << "\n";
    }
    return 0;
}
