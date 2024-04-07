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
    vector<string>a(n);
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
       cin >> a[i];
       mp[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {  
        int f = 0;
        for(int j=1;j<a[i].size();j++)
        {
            string s1 = a[i].substr(0,j);
            string s2 = a[i].substr(j,a[i].size());
            if(mp[s1] > 0 && mp[s2] > 0)
                f = 1;
        }
        cout << f ;
    }
    cout  nl;
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