#include<bits/stdc++.h>
using namespace std;
#define sp   <<" "
#define nl   <<"\n"
#define yes  cout << "YES"
#define no   cout << "NO"
#define int  long long int


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    cout << s;
    // vector<int>v(26);
    // for(int i=0;i<s.size();i++)
    // {
    //    int val = s[i] - 'a';
    //    v[val]++;
    // }
    //  for(int i=0;i<s.size();i++)
    // {
    //    char val = s[i] - 'a';
    //    cout << val + 'a' <<" : " << v[val]<<"\n";
    //}
	 return 0;
}