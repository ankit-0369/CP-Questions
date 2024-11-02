#include <iostream>
#include<algorithm>

using namespace std;

bool isPossible(int x[], int n, int c, int d){
	
	int cur= x[0];
	int cnt= c-1;
	for(int i=1; i<n; i++){
		
		if(x[i]-cur >= d){
			
			cur= x[i];
			cnt--;
			if(cnt == 0) break;
			
		}
	}
	cout<<endl;
	if(cnt >0) return false;
	return true;
	
}

int largestMinDistance(int x[], int n, int c){
	
	sort(x, x+n);
	int low= 0, high= 0;
	for(int i=0; i+1<n; i++) 
		low= min(low, (x[i+1]-x[i]));
	high= x[n-1] - x[0];
	int ans= -1;
    
	while(low<=high){
		
		int mid= low+ (high-low)/2;
		if(isPossible(x,n,c,mid)){
			ans= mid;
            // cout<<ans<<" ";
			low= mid+1;
		}else
			high= mid-1;
	}
	
	return ans;
	
}

int main() {
	
	// your code here
	int t; cin>>t;
	while(t--){
		
		int n,c; cin>>n>>c;
		int x[n];
		for(auto &v:x) 
            cin>>v;
		int ans= largestMinDistance(x,n, c);
		
		cout<<ans<<"\n";
	}

	return 0;
}