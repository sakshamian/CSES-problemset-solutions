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

    ll maxi = INT_MIN;
    ll currmax = 0;

    for(ll i=0;i<n;i++){
        
        currmax += arr[i];
        if(maxi < currmax){
            maxi = currmax;
        }

        if(currmax<0){
            currmax = 0;
        }
    }
    cout<<maxi<<endl;
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