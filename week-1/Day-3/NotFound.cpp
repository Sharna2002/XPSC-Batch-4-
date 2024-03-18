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
    
    string s;
    cin >> s;
    //sort(s.begin(),s.end());
    vector<int>v(26);
    for(int i=0;i<s.size();i++)
    {
       int val = s[i] - 97;
        v[val]++;
    }
    char ans ;
    int f = 0;
    for(int i=0;i<26;i++)
    {
        if(v[i] == 0)
        {
            char c = i + 'a';
            ans = c;
            f = 1;
            break;
         }

    }
    if(f)
        cout << ans nl;
    else
        cout <<"None" nl;
    return 0;
}
