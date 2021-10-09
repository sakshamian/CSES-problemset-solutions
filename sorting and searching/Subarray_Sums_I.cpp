#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n,x; cin>>n>>x;

    vector<ll> arr(n);
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll ans=0,curr=0,i=0,j=0;
    while (i<n)
    {
        curr+=arr[i];
        while(curr>=x){
            if(curr==x){
                ans++;
            }
            curr-=arr[j];
            j++;
        }
        i++;
    }
    
    cout<<ans<<endl;
}

int main(){
    solve();
    return 0;
}