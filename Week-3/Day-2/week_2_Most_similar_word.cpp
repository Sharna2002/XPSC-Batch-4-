#include <bits/stdc++.h>
#define sp    <<" "
#define nl    <<"\n"
#define yes   cout << "YES" 
#define no    cout << "NO"
#define int   long long int
#define vi    vector<int>
#define vs    vector<string>
#define whl   int tc; cin >> tc; while(tc--)
using namespace std;
/**********************Krisna*********************/
int sol(string &a,string &b)
{
     int val = 0;
     for(int i=0;i<a.size();i++)
     {
         val += abs(a[i] - b[i]);
     }
     return val;
}
void solve()
{
        int n,m;
        cin >> n >> m;
        vs s(n);
        for(int i=0;i<n;i++)
            cin >> s[i];

        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               ans = min(ans,sol(s[i],s[j]));
            }
        }
        cout << ans nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    whl
    {
     solve();
    }
    
    return 0;
}
 