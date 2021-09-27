#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
void solve(){ 
    int n; cin>>n;

    set<int> s;

    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        s.insert(temp);
    }
    
    cout<<s.size()<<endl;

}
int main()
{
    fast;
    int t=1; 
    // cin>>t;
    while(t--)
    {
    solve();
    }
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}