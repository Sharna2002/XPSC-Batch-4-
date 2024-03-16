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
   
    for(int i=a;i<=b;i++)
        {
            
            if(i%c == 0)
             {
                 ans = i;
                 f = 1;
                 break;
              }
        } 

    if(f)
        cout << ans nl;
    else
        cout << -1 nl;
    return 0;
}
