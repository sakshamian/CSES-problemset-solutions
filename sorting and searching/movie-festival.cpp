#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
bool comp( pair<int,int> p1, pair<int,int> p2){
    return (p1.second < p2.second);
}
void solve(){
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(ll i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),comp);
    int ans=0;
    int curr = 0;
    for(int i=0;i<n;i++){
        if(v[i].first >= curr){
            ans++;
            curr = v[i].second;
        }
    }
    cout<<ans<<endl;
}
int main() {
    fast;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
