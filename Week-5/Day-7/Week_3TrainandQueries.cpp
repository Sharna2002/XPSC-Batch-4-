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
        int n ,m; cin>>n>>m;
        vector<int> a(n);
        map<int, vector<int>> mp;
       for(int i = 0; i< n; i++){
        cin>>a[i];
        mp[a[i]].push_back(i);
      }
 
      while(m--)
      {
         int x, y; cin>>x>>y;
         if(mp[x].empty()  or mp[y].empty())
         {
            no nl; 
         }
         else if(mp[x].front() <= mp[y].back())
                yes nl;
           else no nl;   
            
            }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    wh{
    	solve();
    }
    //solve();
    return 0;
}