#include <bits/stdc++.h>
#define sp   <<" "
#define nl   <<"\n"
#define yes  cout << "YES"
#define no   cout << "NO"
#define int  long long int
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c,ans,f = 0;
    cin >> a >> b >> c;
   
    int n = c / a;
    ans = n * b;
    cout << ans nl;

    return 0;
}
