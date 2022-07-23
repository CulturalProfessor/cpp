#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int a, b, c, c1 = 0, c2 = 0;
    cout << "enter number of source files\n";
    cin >> a;
    cout << "enter ignored source files\n";
    cin >> b;
    cout << "enter tracked source files\n";
    cin >> c;
    vector<int> s, it, ig, tr;
    for (int i = 1; i <= a; i++)
    {
        s.push_back(i);
    }
    cout << "enter sequence of ignored source files\n";
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        ig.push_back(x);
    }
    cout << "enter sequence of tracked source files\n";
    for (int i = 0; i < c; i++)
    {
        int x;
        cin >> x;
        tr.push_back(x);
    }
    for (int i = 0; i < a; i++)
    {
        if (ig.find_if(begin(), end(), s(i)) == 1 && tr.find_if(begin(), end(), s(i)) == 1)
            c1++;
        if (ig.find_if(begin(), end(), s(i)) != 1 && tr.find_if(begin(), end(), s(i)) != 1)
            c2++;
    }
    cout << "ignored tracked=" << c1 << "\n";
    cout << "unignored untracked=" << c2 << "\n";
}
