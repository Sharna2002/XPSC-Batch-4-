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
    
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        string s, m;
        cin >> s >> m;
        m += m;
        bool f = false;
        int count = 0, ans = 0;

        if (s[0] == 'g')
        {
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < m.size(); i++)
        {
            if (m[i] == 'g')
            {
                ans = max(ans, count);
                f = false;
            }
            if (m[i] == s[0] && f == false)
            {
                f = true;
                count = 0;
            }
            if (f)
            {
                count++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
