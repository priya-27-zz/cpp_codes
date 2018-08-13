#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,h[1000000],i;
  cin>>n;
  for(i=0;i<n;i++)
   cin>>h[i];
 
    int q;cin>>q;
while(q--){
   int x,y,k,j,ctr=0;
     cin>>x>>y;
    int b[1000000];
     for(j=0;j<n;j++)
      { if((j&x)==j)
        { h[j]=h[j]-y;
          b[j]=h[j];
        }else
        b[j]=h[j];
       }
     for(k=0;k<n;k++)
     if(h[k]>0)
       ctr++;
     cout<<ctr<<"\n";
   for(i=0;i<n;i++)h[i]=b[i];}
 
return 0;
}
