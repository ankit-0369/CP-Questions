/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
cin>>t;
while (t--)
{
       int n;
       cin>>n;
       int a[n];
       for(int i=0; i<n; i++){
        cin>>a[i];
       }

       sort(a,a+n);
 
    int prev=a[0];

        int i=1, j=1;
        while(i<n){
            int j=i;
            while(j<n && prev>= a[j]){
                j++;
            }

            if(j>=n) break;
            swap(a[i], a[j]);
            prev+= a[i];
        }




    int cnt=0;
    prev=a[0];
    for(int i=1; i<n; i++){
        if(prev>=a[i]){
            cnt++;
        }
    }

       cout<<cnt<<"\n";
       for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
       }
       cout<<endl;
}

return 0;
}