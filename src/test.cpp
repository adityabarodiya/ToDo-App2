#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>

bool is_substring(const string &a, const string &b)
{
    /* Use std::string::find for efficient substring search */
    return b.find(a) != string::npos;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;
    int c = 0;
    bool f = false;
    if (is_substring(s, x))
    {
        cout << 0 << endl;
        return;
    }

    // c++;
    // x += x;
    int l = x.size();


    while (l < 4*n)
    {
       

        if (is_substring(s, x))
        {
            f = 1;
            break;
        }
        else
        {
            x += x;
            c++;
        }
    }
    if (f)
    {
        cout << c << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    l = x.size();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
