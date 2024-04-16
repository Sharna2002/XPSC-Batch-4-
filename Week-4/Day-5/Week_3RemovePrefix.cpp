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
    int n,cnt = 0,ans = 0,f = 0;
    cin >> n;
    vi a(n+1);
    
    for(int i=0;i<n;i++)
    {
    	 cin >> a[i];
    }
    reverse(a.begin(),a.end());
    set<int>s;
    for(int i=0;i<a.size();i++)
    {
        if(s.count(a[i]))
        {
        	cout << n-i+1 nl;
        	f = 1;
        	break;
        }
        s.insert(a[i]);
    }
    if(f == 0)
    	cout << 0 nl; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    wh
    {
        solve();
    }
    
    return 0;
}
 