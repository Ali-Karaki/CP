#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{
  set<int> s;
  for (int i = 0; i < 4; i++)
  {
    int a;
    cin >> a;
    s.insert(a);
  }
  cout << 4 - s.size();
}