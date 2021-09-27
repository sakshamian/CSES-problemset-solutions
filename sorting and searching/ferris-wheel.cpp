#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
void solve(){ 
    int n,x; cin>>n>>x;
    vector<int> p(n);

    for(auto &i:p){
        cin>>i;
    }
    sort(p.begin(),p.end());
    
    int start=0,end=n-1;
    int ans=0;
    while(start<=end)
    {
        if((p[start]+p[end]) <=x){
            start++;
            end--;
        }
        else{
            end--;
        }
        ans++;
    }
    cout<<ans<<endl;
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