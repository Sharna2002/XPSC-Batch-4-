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
    
    string s,t;
    cin >> s >> t;
    int cnt = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != t[i])
            cnt ++;
    }
    cout << cnt nl;
    return 0;
}
