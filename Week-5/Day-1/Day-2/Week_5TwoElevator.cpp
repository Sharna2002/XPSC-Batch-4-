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
    int a,b,c;
    cin >> a >> b >> c;
    int x = abs(a-1);
    int y = abs(b-c) + abs(c-1);
    if(x < y)
    	cout << 1 nl;
    else if(y < x)
    	cout << 2 nl;
    else 
    	cout << 3 nl;
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
 