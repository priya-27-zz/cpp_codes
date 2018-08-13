#include<bits/stdc++.h>
#define max 100005
#define ll long long int
#define llu unsigned long long
using namespace std;
ll n,m;
ll id[max];
pair<ll,pair<ll,ll> > p[max];
void ini()
{
	int i =0;
	for(i=0;i<=n;i++)
	{
		id[i] = i;
	}

}
ll root(ll x)
{
	while(id[x]!=x)
	{
		id[x] = id[id[x]];
		x = id[x];
	}
	return x;
}
ll unio(ll x,ll y)
{
	int p1 = root(x);
	int q = root(y);
	id[p1] = id[q];
}

ll kruskal(pair<ll,pair<ll,ll> > p[])
{
	ll w,x,y,mincost = 0;
	for(int i=0;i<m;i++)
	{
	x = p[i].second.first;
	y = p[i].second.second;
	w = p[i].first;
	if(root(x)!=root(y))
	{
		mincost += w;
		unio(x,y);
	}
}
return mincost;
}
int main()
{

	ll i,j,k,w,a,b;
	scanf("%lld %lld",&n,&m);
	ini();
	for(i=0;i<m;i++)
	{
		scanf("%lld %lld %lld",&w,&a,&b);
		p[i] = make_pair(w,make_pair(a,b));
	}
	sort(p,p+n);
	k = kruskal(p);
	printf("minweight = %lld\n",k);
}
