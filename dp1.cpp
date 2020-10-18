#include<bits/stdc++.h>
using namespace std;
int i,j,t,smax,maxindex,m,n;
int maxi;
int main()
{
	cin>>tum;
	while(tum--)
	{
		cin>>n>>m;
		int arr[n][m], dp[n][m];
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		cin>>arr[i][j];
		
		for(i=0;i<n;i++)
		{ 
	
		 for(j=0;j<m;j++)
		  {
		  	if(i==0)
		  	dp[i][j]=arr[i][j];
		  	else
		  	{
		  	if(j!=maxindex)
		  	{
		  		dp[i][j]=arr[i][j]+maxi;
			}
			else
			{
				dp[i][j]=arr[i][j]+smax;
			}
			}
		  }//end of inner for loop
		 	 maxi=0,smax=0;
		  for(j=0;j<m;j++)
		  {
		  	if(dp[i][j]>maxi)
		  	{
		  		maxi=dp[i][j];
		  		maxindex=j;
			}
		  }
		  
		  for(j=0;j<m;j++)
		  {
		  	if(j!=maxindex)
		  	{
		  		if(dp[i][j]>smax)
		  		{
		  			smax=dp[i][j];
				}
			  }
		  }
		}cout<<dp[n-1][m-1];
		
	}
}

