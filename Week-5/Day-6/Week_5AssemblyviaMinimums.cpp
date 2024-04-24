#include <bits/stdc++.h>
#define sp    <<" "
#define nl    <<"\n"
#define yes   cout << "YES"
#define no    cout << "NO"
#define int   long long int
#define vi    vector<int>
#define vs    vector<string>
#define wh    int tc; cin >> tc; while(tc--)
using namespace std;
/**********************Krisna*********************/
void solve()
{
        int  n,mx = INT_MIN;
        cin >> n;
        int m = (n * (n - 1)) / 2;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mx = max(mx,b[i]);
        }
        sort(b.begin(), b.end());
        int x = 1, idx = 0;
        int p = n - x;
        while (n - x > 0)
        {
            a[idx++] = b[p - 1];
            x++;
            p += n - x;
        }
        a[n - 1] = mx;
        for (auto aa : a)
        {
            cout << aa << " ";
        }
        cout nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    wh{
    	solve();
    }
    //solve();
    return 0;
}