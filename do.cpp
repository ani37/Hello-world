#include<bits/stdc++.h>
  #define ll long long
#define pb  push_back
#define fr(i,a,n) for(ll i=a;i<n;i++)
using namespace std;


void solve(){
  int T=1;
  //cin>>T;
  while(T--){
      ll n,d,k,ans=0,c=0,p,m=1,t,z=0;
      cin>>n>>d;
      ll a[n];
    for (int i = 0; i < n; ++i){
          cin>>a[i];
        }
      while(true){
        for (int i = 0; i < n; ++i)
        { 
        if(a[i]<=d){
          c+=a[i];
          z++;
        }}
        if(z==0)
          break;

        if(c<=d)   { 
        ans+=z*(d/c);
     //   cout<<d<<" ";
                d%=c;      
            }
          c=0;
          z=0;

              }

        cout<<ans<<"\n";
  }
}
    

    int main(){
      #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
        ios_base::sync_with_stdio(false);   
        cin.tie(NULL);
       solve();
    return 0;
    } 