#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i=0; i<n; i++)
        {   int x;
            cin>>x;
            vec.push_back(x);
            
        }
        if (n <= 2)
            cout << "-1\n";
        else
        {

            int t1 = find(vec.begin(), vec.end(), 1) - vec.begin();
            int t2 = find(vec.begin(), vec.end(), 3) - vec.begin();
            swap(vec[t1], vec[t2]);
            for (int i : vec)
            {
                cout << i << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}
