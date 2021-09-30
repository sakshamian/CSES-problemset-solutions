#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define lld long long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
using namespace std;


void solve(){ 
   string s;
    cin>>s;
    vector<int> freq(26,0);
    int n=s.size();
    for(int i=0;i<n;i++){
        freq[s[i]-'A']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(freq[i]%2 == 1){
            cnt++;
        }
    }
    if(cnt>1){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    for(int i=0;i<26;i++){
        if(freq[i]%2==0){
            for(int j=0;j<freq[i]/2;j++){
                cout<<char('A'+i);
            }
        }
    }
    for(int i=0;i<26;i++){
            if(freq[i]%2){
            for(int j=0;j<freq[i];j++){
                cout<<char('A'+i);
            }
        }
    }
    for(int i=25;i>=0;i--){
        if(freq[i]%2==0){
            for(int j=0;j<freq[i]/2;j++){
                cout<<char('A'+i);
            }
        }
    }
    cout<<endl;
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