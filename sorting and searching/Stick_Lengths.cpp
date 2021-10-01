#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
string ans="";
void solve(){
    ll n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans=0;
    sort(arr.begin(),arr.end());
    int middle = arr[n/2];

    for(auto it:arr){
        ans+=abs(it-middle);
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