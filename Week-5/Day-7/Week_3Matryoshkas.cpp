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
        int n, i, j, ans=0;
        cin>>n;
        int a[n];
        
        vector<pair<int ,int>> b;
        
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        sort(a, a+n);
        reverse(a, a+n);
        
        for(i=0; i<n;){
            j=i;
            
            while(i<n && a[i]==a[j]){
                i++;
            }
            
            b.push_back({a[j], i-j});
        }
        
        n=b.size();
        
        ans=b[0].second;
        
        for(i=1; i<n; i++){
            if(b[i].first+1==b[i-1].first){
                ans=ans+max(b[i].second-b[i-1].second, 0ll);
            }else{
                ans=ans+b[i].second;
            }
        }
        
        cout<<ans<<"\n";
        
        
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