#include <bits/stdc++.h>
#define sp   << " "
#define nl   << "\n"
#define yes  cout << "YES"
#define no   cout << "NO"
#define int  long long int
#define vc   vector<int>
#define wh   int tc;   cin >> tc;  while (tc--)
using namespace std;
/**********************Krisna*********************/
void solve()
{
    int n;
    cin >> n;
    int x,m = n;
    vc v[n+1];
    while(m--)
    {
        for(int i=1;i<=n-1;i++)
            {
                cin >> x;
                v[x].push_back(i);
            }
    }
    for(int i=1;i<=n;i++)
    {
       sort(v[i].begin(),v[i].end());
    }
     int ans[n+1];
    for(int i=1;i<=n;i++)
    {
        if(v[i][n-2] == n-1)
        {
            if(v[i][0] == n-1)
                ans[n] = i;
            else
                ans[n-1] = i;
        }
        else
            ans[v[i][n-2]] = i;
    }
    for(int i=1;i<=n;i++)
    {
        cout << ans[i] sp;
    }
    cout nl;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    wh
    {
        solve();
    }

    return 0;
}