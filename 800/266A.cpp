#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  string a;
  int count = 0, n;
  cin >> n >> a;
  for (int i = 1; i < n; i++)
  {
    if (a[i - 1] == a[i])
      count++;
  }
  cout << count << "\n";
  return 0;
}