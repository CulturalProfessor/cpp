#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int c = 0;
    string a, b;
    vector<std::string> concat;
    cout << "enter a\n";
    cin >> a;
    cout << "enter b\n";
    cin >> b;
    vector<std::string> a1;
    vector<std::string> b1;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = i + 1; j < a.length(); j++)
        {
            a1.push_back(a.substr(i, j));
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        for (int j = i + 1; j < b.length(); j++)
        {
            b1.push_back(b.substr(i, j));
        }
    }
    int l1 = a1.size();
    int l2 = b1.size();
    if (l1 == l2)
    {
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < l1; j++)
            {
                concat.push_back(a1[i] + b1[j]);
            }
        }
    }
    else
        cout << "length is not same\n";
    vector<std::string> rev;
    for (int i = 0; i < l1; i++)
    {
        string s = concat[i];
        reverse(s.begin(), s.end());
        rev.push_back(s);
    }
    for (int i = 0; i < l1; i++)
    {
        if (rev[i] == concat[i])
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
        cout << "yes it is possible\n";
    else
        cout << "no it is not possible\n";
    return 0;
}