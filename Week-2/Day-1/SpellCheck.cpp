#include <bits/stdc++.h>
#define sp   <<" "
#define nl   <<"\n"
#define yes  cout << "YES"
#define no   cout << "NO"
#define int  long long int
#define vc   vector<int>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n ;
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        if(s == "Timru")
           yes nl;
        else
            no nl;
    }
    return 0;
}
