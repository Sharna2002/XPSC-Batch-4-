#include <bits/stdc++.h>
#define sp    <<" "
#define nl    <<"\n"
#define yes   cout << "YES" 
#define no    cout << "NO"
#define int   long long int
#define vc    vector<int>
#define whl   int tc; cin >> tc; while(tc--)
using namespace std;
/**********************Krisna*********************/
void solve()
{
    int n,x;
    cin >> n;
    int mx = INT_MIN;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        mp[x]++;
        mx = max(mx,mp[x]);
    }
    if(mx == n)
        cout << 0 nl;
    else
    {
        int cnt = 1;
        while(mx <= n)
        {
            if((mx + mx) >= n)
            {
                cnt += (n - mx);
                break;
            }
            cnt += mx;
            mx = mx*2;
            cnt++;
        }
        cout << cnt nl;
    }

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
 