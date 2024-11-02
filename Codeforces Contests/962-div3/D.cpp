#include<bits/stdc++.h>

class Solution {
public:
    int numberOfSubstrings(string s) {        
        
        int n = s.length();
        std::vector<int> pre1(n + 1, 0), pre0(n + 1, 0);
        int i = 0;
        while (i < n)
        {   
              if (s[i] == '0') pre0[i + 1] = pre0[i] + 1;
            else  pre0[i + 1] = pre0[i];
            if (s[i] == '1')  pre1[i + 1] = pre1[i] + 1;
            else pre1[i + 1] = pre1[i];
          
            i = i + 1;
        }
        int ans = 0, str = 0;
        while (str < n)
        {
            int e = str;
            while (e < n)
            {
                int cnt1 = pre1[e + 1] - pre1[str];
                int cnt0 = pre0[e + 1] - pre0[str];
                if (cnt1 >= cnt0 * cnt0)
                {
                    ans++;
                }
                e++;
            }
            str++;
        }
        return ans;
        
    }
};