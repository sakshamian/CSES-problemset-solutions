#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)  
#define MOD 1000000007
using namespace std;

void solve(){
    ll n;
    cin>>n;
 
    ll ans=0;
 
    for(ll i=5;i<=n;i*=5){
        ans+=(n/i);
    }
 
    cout<<ans<<endl;
}

int main()
{
    fast;
    int t=1; 
    cin>>t;
    while(t--)
    {
    solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}