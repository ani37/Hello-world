#include <bits/stdc++.h>
using namespace std;
#define what_is(x) cerr << #x << " is " << x << endl;
#define DB(x) cerr << __LINE__ << ": " << #x << " = " << (x) << endl
#define FOR(i, x, y) for (int i = x; i <= y; i++)
#define pb push_back
#define mp make_pair
#define sz size
#define INF 10000007
#define LLINF 100000000000000007
#define maxN 100005
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
    
#define time__(d)for(long blockTime=NULL;(blockTime==NULL?(blockTime=clock())!=NULL:false); debug("%s:%.4fs",d,(double)(clock()-blockTime)/CLOCKS_PER_SEC))

typedef pair<int,int> pi;
typedef pair<pi,int> pii;
typedef long long ll;
typedef vector<int> vi;

bool ist(int a, int b, int c){
	return (a+b>c && b+c>a && a+c>b);
}


void solve(int n){
	 int ans=0;
     for (int i=1; i<=n; i++){
     	for (int j=i; j<=n; j++){
     	        int k= i xor j;
     			if (k>n || k<j) continue;
     			if (ist(i,j,k)  )
     			ans++;
     	}
     }
    cout<<ans<<endl;
}

int main(){
	int n;
	cin>>n;
	time__("programm time"){
		solve(n);
	}
	
  
	return 0;
}
