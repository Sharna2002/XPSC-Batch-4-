#include <bits/stdc++.h>
#define sp    <<" "
#define nl    <<"\n"
#define yes   cout << "YES"
#define no    cout << "NO"
#define int   long long int
#define vi    vector<int>
#define vs    vector<string>
#define while int tc; cin >> tc; while(tc--)
using namespace std;
/**********************Krisna*********************/
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin >> a[i];
    priority_queue<int>pq;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
    	 if(a[i] == 0)
    	 {
    	 	 if(!pq.empty())
    	 	 {
           ans += pq.top();
           pq.pop();
    	 	 }	
    	 	 else
    	 	 	continue;
    	 }
    	 else
    	 	pq.push(a[i]);

    }
    cout << ans nl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while
    {
        solve();
    }
    
    return 0;
}
 