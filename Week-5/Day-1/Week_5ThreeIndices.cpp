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
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
    	cin >> a[i];
    }
    for(int i=1;i<n-1;i++)
    {
    	if(a[i] > a[i-1] && a[i] > a[i+1])
    	{
    		 yes nl;
    		cout << i sp << i+1 sp << i+2 nl;
    		break;
    	}
    }
    no nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // wh
    // {
        solve();
    // }
    
    return 0;
}
 