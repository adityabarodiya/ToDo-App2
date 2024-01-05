#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;

    vi v(n);

    //bool neg = 0, pos = 0;    
    int posMn = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        int j;
        cin >> j;
        v[i] = abs(j);
        if (v[i] == 0)
        {
            cout << "0\n";
            return;
        }else if(v[i] < posMn) posMn = v[i];      
    }

    cout << posMn <<endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}
