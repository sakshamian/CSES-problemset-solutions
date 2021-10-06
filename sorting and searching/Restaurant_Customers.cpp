#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n; cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0,curr=0,ans=0;

    while (i<n)
    {
        if(a[i]<b[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        ans = max(ans,curr);
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int test=1; 
    // cin>>test;
    while(test--)
    {
     testcase();
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}