#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void tower(int n, int one , int three, int two){
    if(n==1){
        cout<<one<<" "<<three<<endl;
        return;
    }
    tower(n-1,one, two, three);
    cout<<one<<" "<<three<<endl;
    tower(n-1,two,three,one);
}
void solve(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    int one = 1, two=2, three=3;
    tower(n,one,three,two);
}
int main() {
    fast;
    int t=1;
    // cin>>t;
    while(t--){
        solve( );
    }
}