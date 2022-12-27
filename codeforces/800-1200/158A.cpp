#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  int n, k, count = 0;
  cin >> n >> k;
  vi vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  int thresh = vec[k - 1];
  for (int i = 0; i < n; i++)
  {
    if (vec[i] >= thresh && vec[i] > 0)
    {
      count++;
    }
  }
  cout << count << "\n";

  return 0;
}