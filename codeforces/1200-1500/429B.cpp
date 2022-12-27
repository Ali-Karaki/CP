/* Vanya and Lanterns */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main()
{

  std::cout << std::fixed;
  std::cout << std::setprecision(10);

  int n, l;
  cin >> n >> l;

  vi vec(n);

  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }

  sort(vec.begin(), vec.end());

  double dist = vec[0];

  for (int i = 1; i < n; i++)
  {
    dist = max(dist * 1.0, (vec[i] - vec[i - 1]) / 2.0);
  }
  dist = max(dist, l - vec[vec.size() - 1] * 1.0);
  cout << dist << "\n";
  return 0;
}