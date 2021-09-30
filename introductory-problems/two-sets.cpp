#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)  
using namespace std;


void solve(){ 
   ll n;
    cin>>n;
    ll t=n*(n+1);
    vector<ll> a,b;
    if(t%4)
    cout<<"NO"<<endl;
    else
    {
        t/=4;
        vector<ll> a;
        ll s=0,e=0,i=n;
        while (true)
        {
            a.push_back(i);
            s+=i--;
            e=t-s;
            if(!e)
            break;
            if(e<=i)
            {
                a.push_back(e);
                break;
            }
        }
        cout<<"YES"<<endl<<a.size()<<endl;
        for (int j = 0; j < a.size(); j++) {
        cout << a[j]<<" ";
        }
        cout<<endl;
        cout<<n-a.size()<<endl;
        for (ll j = i; j > 0; j--) {
        if (j == e) continue;
        cout << j<<" ";
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