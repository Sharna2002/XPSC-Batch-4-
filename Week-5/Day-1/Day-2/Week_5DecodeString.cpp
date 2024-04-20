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
    string a;
    cin >> a;
    int i = n-1,val;
    string ans ="";
    while(i >= 0)
    {
    	if(a[i] =='0'){
                val = (a[i-2] - 48)*10 + a[i-1] - 48;
                i-=3;
            }
      else{
                val = a[i]- 48;
                i--;
            }
            ans += char(val + 97 - 1);
    }
    reverse(ans.begin(),ans.end());
    cout << ans  nl;

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
 