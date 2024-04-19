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
    int n;
    cin >> n;
    int ans = 1;
    while(ans <= n)
    {
        ans *= 2;
       // cout << ans sp;
    }
    ans /= 2;
    cout << ans - 1 nl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    whl
    {
     solve();
    }
    
    return 0;
}
 