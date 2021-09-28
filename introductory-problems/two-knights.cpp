#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 

void solve(){
    ll n; cin>>n;
    for(ll i=1;i<=n;i++){
        ll ans = (i*i) * (i*i-1) / 2;
        ll cnt = 4*(i-1)*(i-2);
        cout<<ans-cnt<<endl;
    }
}
int main(){
    fast;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
