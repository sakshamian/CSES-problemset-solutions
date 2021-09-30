#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;


void solve(){ 
   ll row,col;
    cin>>row>>col;
    if(row>=col){
        if(row%2){
            cout<<((row-1)*(row-1))+col<<endl;
        }
        else{
            cout<<(row*row)-col+1<<endl;
        }
    }
    else{
        if(col%2){
            cout<<(col*col)-row+1<<endl;
        }
        else{
            cout<<((col-1)*(col-1))+row<<endl;
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