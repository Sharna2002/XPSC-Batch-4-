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
    
    int k,s;
    cin >> k >> s;
    int cnt = 0;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            int z = s - i - j; 
            if(z >= 0 && z <= k)
                cnt++;
        }
    }
    cout << cnt nl;
    return 0;
}
