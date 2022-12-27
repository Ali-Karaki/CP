#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  string a, b, res = "";
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++)
  {
    res += (a[i] != b[i]) ? "1" : "0";
  }
  cout << res;
  return 0;
}