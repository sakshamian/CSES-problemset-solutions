#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
    int n; cin>>n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x; cin>>x;
        int ans=0;
        while(v.size()){
            if(v.back().first >= x){
                v.pop_back();
            }
            else{
                ans = v.back().second;
                break;
            }
        }
        cout<<ans<<" ";
        v.push_back({x,i});
    }

       
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