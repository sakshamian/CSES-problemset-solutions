#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;
void solve(){ 
    int n,m,k,i=0,j=0; 
    cin>>n>>m>>k;

    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    sort(a,a+n);  sort(b,b+m);

    int cnt=0;
    while(i<n && j<m){
        int size = abs(a[i] - b[j]);

        if(size<=k){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<cnt<<endl;
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