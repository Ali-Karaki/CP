#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  int n;
  cin >> n;

  vi vec(n);

  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }

  int count_even = 0, count_odd = 0, last_even = 0, last_odd = 0;

  for (int i = 0; i < n; i++)
  {
    if (vec[i] % 2 == 0)
    {
      last_even = i + 1;
      count_even++;
    }
    else
    {
      last_odd = i + 1;
      count_odd++;
    }
  }

  int res = count_even < count_odd ? last_even : last_odd;
  cout << res << "\n";

  return 0;
}