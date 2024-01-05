#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>

void solve()
{
    int n, m;
    cin >> n >> m;
    set<int> st;

    while (n--)
    {
        int a;
        cin >>a;
        st.insert(a);
    }

   if (st.find(m) != st.end())
        cout << "YES\n";
    else
        cout << "NO\n";
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
