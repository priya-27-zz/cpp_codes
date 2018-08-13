#include<bits/stdc++.h>
using namespace std;
int minimalSteps(string s,int n)
{
     int dp[n];

     //initializing dp[i] to INT_MAX
     for(int i=0;i<n;i++)
       dp[i]=INT_MAX;

    //initialize both strings to null
    string s1="",s2="";

    //base case
     dp[0]=1;

     s1+=s[0];

     for(int i=1;i<n;i++)
     {
     s1+=s[i];
     //check if it can be appended
     s2=s.substr(i+1,i+1);
     //addition of character takes one step
     dp[i]=min(dp[i],dp[i-1]+1);
//appending takes 1 step and we directly reach index i*2+1 after apppending
//so the number of steps is stord in i*2+1

if(s1==s2)
dp[i*2+1]=min(dp[i]+1,dp[i*2+1]);

     }
   return dp[n-1];
}

int main()
{
string s="aaaaaaaa";
int n=s.length();
//function call to return minimal number of moves
cout<<minimalSteps(s,n);

cout<<"\n\n\n";
return 0;
}
