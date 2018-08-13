

    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int i,j,t,maxi,max1,maxind,n,m;
    int main()
    {
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d %d",&n,&m);
            int arr[n][m],ans[n][m];
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(i==0)
                    {
                        ans[i][j]=arr[i][j];
                    }
                    else 
                    {
                        if(j!=maxind)
                        {
                            ans[i][j]=arr[i][j]+maxi;
                        }
                        else 
                        {
                            ans[i][j]=arr[i][j]+max1;
                        }
                    }
                }
                maxi=max1=0;
                for(j=0;j<m;j++)
                {
                    if(ans[i][j]>maxi)
                    {
                        maxi=ans[i][j];
                        maxind=j;
                    }
                }
                for(j=0;j<m;j++)
                {
                    if(j!=maxind)
                    {
                        if(ans[i][j]>max1)
                        {
                            max1=ans[i][j];
                        }
                    }
                }
            }
            printf("%d\n",maxi);
        }
    }


