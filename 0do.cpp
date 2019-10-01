#include <bits/stdc++.h>
using namespace std;
#define PR(x) printf("%d\n",x)
#define  MAXSIZE 1000001
#define y1 aasdfasdfasdf

int N,P[MAXSIZE],R[MAXSIZE];
int Q,X,Y;
void buildtree(int *tree,int *a,int index,int s,int e)
{
    if(s>e)
    return;
    if(s==e)
    {
        tree[index] = a[s];
        return;
    }
    int m = (s+e)/2;
    buildtree(tree,a,2*index,s,m);
    buildtree(tree,a,2*index+1,m+1,e);
    tree[index] = max(tree[2*index],tree[2*index+1]);
    return;
}
int query(int *tree,int index,int s,int e,int qs,int qe)
{
    if(qs>e or s>qe)
    return -1;
    if(s>=qs and e<=qe)
    {
        return tree[index];
    }
    int m = (s+e)/2;
    int left = query(tree,2*index,s,m,qs,qe);
     int right = query(tree,2*index,m+1,e,qs,qe);
     return max(left,right);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
  int i,x,y;
  scanf("%d",&N);
   pair<int,int> b[N];
   int a[N],c[N];
  for(i=0;i<N;i++)
  {
    scanf("%d %d",&b[i].first,&b[i].second);
  }
  sort(b,b+N);
  for(i=0;i<N;i++)
  {
    a[i] = b[i].second;
    c[i] = b[i].first;
  }
  int *tree = new int[4*N];
  buildtree(tree,a,1,0,N-1);
  scanf("%d",&Q);
  
  while(Q--)
  {
    scanf("%d %d",&X,&Y);
    x = Y;
    X = lower_bound(c,c+N,X)-c;
     x = Y;
  
      Y = upper_bound(c,c+N,Y)-c;
      if(Y>N-1 or c[Y]>x)
      Y--;
     
    cout<<query(tree,1,0,N-1,X,Y)<<"\n";
  }
  return 0;
}