#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  int n, x = 0;
  cin >> n;
  vector<string> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  for (int i = 0; i < n; i++)
  {
    x += (vec[i][1] == '+' ? 1 : -1);
  }
  cout << x << "\n";
  return 0;
}