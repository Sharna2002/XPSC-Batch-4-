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
    string s;
    cin >> n >> s;
    int a = 0,ans = 0;
    for(int i=0;i<n;i++)
    {
    	if(s[i] == '(')
    		a++;
    	else
    	{
    		a--;
    		if(a<0)
    		{
    			a = 0;
          ans++;
    		}
    	}
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
 