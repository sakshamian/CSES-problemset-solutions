#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 

void solve(int k){
    ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    long long int cnt=0;
    for(ll i=1;i<n;i++){
        if((a[i]-a[i-1])<0){
            cnt+=abs(a[i]-a[i-1]);
            a[i]=a[i-1];
        }
    }
    cout<<cnt<<endl;
}
int main() {
    fast;
    int t=1;
    // cin>>t;
    int k=1;
    while(t--){
        solve(k);
    }
}