#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  string res = "";

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    res += (i % 2 == 0) ? "I hate" : "I love";
    if (i < n - 1)
    {
      res += " that ";
    }
  }

  res += " it";
  cout << res;
  return 0;
}