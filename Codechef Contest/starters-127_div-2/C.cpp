#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    queue<int> q;
    int curr = -1;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == b[i])
      {
        if (a[i] == 'b')
        {
          curr = i;
        }
      }
      else if (a[i] == 'a' && b[i] == 'c')
      {
        q.push(i);
      }
      else if (a[i] == 'c' && b[i] == 'a')
      {
        if (q.size() != 0 && q.front() < curr)
        {
          q.pop();
        }
        else
        {
          cout << "No" << endl;
          flag = false;
          break;
        }
      }
      else
      {
        cout << "No" << endl;
        flag = false;
        break;
      }
    }
    if (flag == true && q.size() > 0)
    {
      cout << "No" << endl;
    }
    else if (flag)
    {
      cout << "Yes" << endl;
    }
  }
}
