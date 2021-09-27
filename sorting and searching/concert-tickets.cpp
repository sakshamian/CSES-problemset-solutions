#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
void solve(){ 
    int n,m; cin>>n>>m;
    multiset<int,greater<int>> a;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.insert(x);
    }
    
    while(m--){
        int x; cin>>x;
        auto ind = a.lower_bound(x) ;
        
        if(ind == a.end()){
            cout<<-1<<endl;
        }
        else{
            cout<<*ind<<endl;
            a.erase(ind);
        }
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