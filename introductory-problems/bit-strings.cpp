#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)  
#define MOD 1000000007
using namespace std;

ll fastpower(ll x,ll n){
    ll res = 1;
    while(n){
        if(n&1){
            res = res * x % MOD;
        }
        n = n/2;
        x = (x * x) % MOD; 
    }
    return res;
}

void solve(){ 
    ll n;
    cin>>n;
    cout<<fastpower(2,n)<<endl;
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