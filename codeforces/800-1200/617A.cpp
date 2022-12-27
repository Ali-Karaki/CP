#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  int x, steps = 0;
  cin >> x;
  while (x > 5)
  {
    x -= 5;
    steps++;
  }
  cout << steps + 1 << "\n";
  return 0;
}