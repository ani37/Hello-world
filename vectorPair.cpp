#include<bits/stdc++.h>
using namespace std;
 bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
    void solve(){
    	int long long t;
  
    	cin>>t;
    	while(t--){
    	  int n,count=0;
    	  cin>>n;
    	  vector< pair <int,int> > vect;

 int b,c,max=-1;
int m=n,j=0;
while(m--){
	cin>>b>>c;
  vect.push_back( make_pair(b,c) );
 
 	}

 		
	 sort(vect.begin(), vect.end(), sortbysec);

	 for (int i = 0; i < n; ++i)
	 {   c=0;
	  for (int j = 0; j < n; ++j)
	 {
	 	if(vect[j].first>vect[n-i-1].second)
	 		c++;

	 }
	 	if(max>c)
	 		max=c;
    }
    cout<<max<<"\n";


}
 
    int main(){
 
      ios_base::sync_with_stdio(false);   
         cin.tie(NULL);
       solve();
     
    	return 0;
    } 