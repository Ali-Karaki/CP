#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

const int limit = 1000001;

// sieve of eratosthenes
// square root of prime numbers are T-prime
set<ll> isPrime()
{
  // static so primes[] duration persists
  static bool primes[limit];
  for (int i = 2; i * i < limit; i++)
  {
    if (!primes[i])
    {
      // flag multiples of i
      for (int j = i * i; j < limit; j += i)
      {
        primes[j] = true;
      }
    }
  }
  set<ll> res;
  for (int i = 2; i < limit; i++)
  {
    if (!primes[i])
    {
      // add square of prime number
      res.insert((ll)i * i);
    }
  }
  return res;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  set<ll> set(isPrime());
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    ll a;
    cin >> a;
    // set.find returns set.end if element not found
    if (set.find(a) != set.end())
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
}