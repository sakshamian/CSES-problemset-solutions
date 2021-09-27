#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
void solve(){ 
    ll n; cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    for(int i=n;i>0;i--){
        if(i%2)
        cout<<i<<" ";
    }
    for(int i=n;i>0;i--){
        if(i%2==0)
        cout<<i<<" ";
    }
 
}
int main()
{
    fast;
    int t=1; 
    // cin>>t;
    while(t--)
    {
    solve();
    }
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}