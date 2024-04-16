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
    vs a(n+1);
    
    for(int i=0;i<n;i++)
    {
    	 cin >> a[i];
    }
    reverse(a.begin(),a.end());
    set<string>s;
    string ss = "";
    for(int i=0;i<a.size();i++)
    {
        if(!s.count(a[i]))
        {
        //     ss += a[i][a[i].size() - 2]; 
        // 	  ss += a[i][a[i].size() - 1]; 
        	s.insert(a[i]);
        	ss += a[i][a[i].size() - 2]; 
        	ss += a[i][a[i].size() - 1]; 
        }
        //s.insert
     // how to remove front spaces 
        
    }
    int x = ss.size();
    cout << ss.substr(2,x-1) nl;
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
 