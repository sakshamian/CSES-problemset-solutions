
#include<bits/stdc++.h>
using namespace std;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define nn "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld; 
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
 
void solve(){
    ll n; cin>>n;
    long long int s=0,ans=n*(n+1)/2;
    for(ll i=0;i<n-1;i++){
        int temp;
        cin>>temp;
        s+=temp;
    }
    // cerr<<ans<<" "<<s<<" "<<nn;
    cout<<ans-s<<nn;
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
 
}