#include<iostream>
#include<map>
using namespace std;
int main()
 {
	int t;
	
	cin>>t;
	while(t--)
    {
        string s1;
        int n,count;
        count=-99999;
        map<string,int>hash;
        cin>>n;
        while(n--)
        {
            cin>>s1;
            hash[s1]++;
        }
        
        for(auto itr=hash.begin();itr!=hash.end();itr++)
        {
            if((itr->second)>count)
            {
                count=itr->second;
                s1=itr->first;
            }
            
        }
        
        
        cout<<s1<<endl;
    }
	return 0;
}
