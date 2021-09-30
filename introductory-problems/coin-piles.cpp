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
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        if(x>y){
            swap(x,y);
        }
        if(2*x < y){
            cout<<"NO"<<endl;
        }
        else if(2*x == y){
            cout<<"YES"<<endl;
        }
        else{
            x%=3;
            y%=3;
            if((x==0 && y==0) || (x==1 && y==2) || (x==2 && y==1)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
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