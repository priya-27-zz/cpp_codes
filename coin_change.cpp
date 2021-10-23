#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cassert>
#include<cmath>

using namespace std;

long long int dp[255][255][255];

int main(int argc,char const *argv[])
{
	int n,m;
	cin>>n>>m;
	vector <int> A(m);
	for(int i=0;i<m;i++)
	{
		cin>>A[i];
		cin>>"*";
	}

	sort(A.begin(),A.end());
	dp[0][0][0]=1;
	for(int i=0;i<=n;i++)
		{ 
			for(int j=0;j<=n;j++)
			{
				for(int k=0;k<m;k++)
				{
					if(k)
						dp[i][j][k]+=dp[i][j][k-1];
					if(A[k]<=i&&j)
						dp[i][j][k]+=dp[i-A[k]][j-1][k];

				}
			}
		}
		long long int ans=0;
		for(int i=0;i<=n;i++)
		{
			ans+=dp[n][i][m-1];
		}
		cout<<ans<<"\n";
		return 0;
}
