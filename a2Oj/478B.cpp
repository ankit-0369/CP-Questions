// /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// #include<bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main(){
//  int n,m;
// cin>>n>>m;

// int mini=0;
// int x= n/m;
// x= x*(x-1)/2;
// x*= (m-1);
// int y= n/m+ n%m;
// y= y*(y-1)/2;
// mini= x+y;
// int maxi= n-m+1;
// maxi= maxi*(maxi-1)/2;
// cout<<mini<<" "<<maxi;
// return 0;

// }

#include <iostream>
using namespace std;
int main()
{
    long long n, m;
    std::cin >> n >> m;
    int mini= (m * (n / m - 1) + (n % m) * 2) * (n / m) / 2;
    int maxi= ((n - m + 1) * (n - m) / 2);
    cout<<mini<<" "<<maxi;
}