#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    map<int,int>mpp1;
	    map<int,int>mpp2;
	    for(int i=0;i<n;i++)
	    {
	        mpp1[a[i]%m]++;
	        mpp2[b[i]%m]++;
	        
	    }
	    int ans=0;
	    for(auto it :mpp1)
	    {
	        if(it.first==0)
	        {
	            if(mpp2.find(0)!=mpp2.end())
	            {
	                ans+=mpp1[0] *mpp2[0];
	            }
	        }
	        else{
	            if(mpp2.find(m-it.first)!=mpp2.end())
	            {
	                ans+=it.second*mpp2[m-it.first];
	            }
	        }
	    }
	    cout<<ans<<endl;
	}

}