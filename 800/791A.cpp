#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  int a, b, count = 0;
  cin >> a >> b;
  while (a < b + 1)
  {
    a *= 3;
    b *= 2;
    count++;
  }
  cout << count << "\n";
  return 0;
}