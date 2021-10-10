#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void doit(){
    int n; cin>>n;
    
    vector<string> ans;
    string cnt="";

    map<string,int> mp;

    for(int i=0;i<n;i++){
        cnt+='0';
    }

    ans.push_back(cnt);
    string final = cnt;
    mp[final] = 1;

    while(ans.size() != pow(2,n)){
        string curr =  final;

        for(int i=0;i<final.size();i++){
            if(curr[i]=='0'){
                curr[i]='1';
            }
            else{
                curr[i]='0';
            }

            if(mp.find(curr) == mp.end()){
                final =curr;
                ans.push_back(curr); 
                mp[final]=1;
                break;
            } 
            if(curr[i]=='0'){
                curr[i]='1';
            }
            else{
                curr[i]='0';
            }

        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
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
      doit();
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}