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
    int a[n];
    set<int>s;

    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    // for(auto x:s)
    //     cout << x sp;
    // cout << "\n";
    if((n-s.size()) %2 == 0)
    {
        cout << s.size() nl;
    }
    else
        cout << s.size()-1 nl;
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
 