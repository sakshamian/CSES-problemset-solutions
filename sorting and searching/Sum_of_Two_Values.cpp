#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve(){
   ll n,x; cin>>n>>x;
   vector<pair<ll,ll>> arr;
   for(int i=0;i<n;i++){
       int temp; cin>>temp;
       arr.push_back(make_pair(temp,i));
   }
   sort(arr.begin(),arr.end());
   ll i=0,j=n-1;
   while(i<j){
       if(arr[i].first + arr[j].first == x){
           cout<<arr[i].second+1<<" "<<arr[j].second+1<<endl;
           return;
       }
       if(arr[i].first + arr[j].first < x){
           i++;
       }
       else{
           j--;
       }
   }

   cout<<"IMPOSSIBLE";
}

int main(){
    fast;
    solve();
    return 0;
}