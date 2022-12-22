#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  string a;
  cin >> a;
  a.erase(remove(a.begin(), a.end(), '+'), a.end());
  sort(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
    if (i != a.size() - 1)
      cout << "+";
  }
  return 0;
}