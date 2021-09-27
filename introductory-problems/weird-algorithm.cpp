#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//   Logic here 
void solve(){ 
    long long int n; cin>>n;
    while(true){
        if(n==1)
        {
            cout<<n;
            break;
        }
        cout<<n<<" ";
        if(n%2)
        {
            n = (n*3)+1;
        }
        else{
           n/=2;
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