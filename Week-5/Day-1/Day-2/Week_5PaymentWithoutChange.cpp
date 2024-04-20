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
    int a,b,n,s, f = 0;
    cin >> a >> b >> n >> s;
    int x = s / n;
    int ax = a - x;
    if(ax < 0)
    {
    	 int y = s  - a*n;
    	 if(y <= b)
    	   {
    	   	  f = 1;
    	   } 
    }
    else
    {
    	 int y = s - x*n;
    	 if(y <= b)
    	   {
    	   	  f = 1;
    	   }
    }
    if(f)
    	yes nl;
    else
    	no nl;
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
 