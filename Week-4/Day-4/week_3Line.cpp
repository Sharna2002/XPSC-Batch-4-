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
    string s;
    cin >> s;
    vector<int>a;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
         if(s[i] == 'L')
         {
            a.push_back((n-i-1)-i);
            ans += i;
         }
         else 
         {
            a.push_back(i-(n-i-1));
            ans += (n-i-1);
         }
    }
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            ans += a[i];
        cout << ans sp;
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