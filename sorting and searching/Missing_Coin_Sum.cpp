#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve(){
    ll n; cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    ll ans =1 ;
    for(ll i=0;i<n;i++){
        if(ans<arr[i]){
            break;
        }
        else
        ans+=arr[i];
    }
    cout<<ans<<endl;


}

int main(){
    fast;
    int t=1; 
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}