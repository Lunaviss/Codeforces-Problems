#include<bits/stdc++.h>

using namespace std;

void solve() 
{
  int n;
  cin >> n;
  int a, b;
  int passengers = 0;
  int maxPass = 0;
  for(int i = 0; i < n; ++i) {
    cin >> a >> b;
    passengers = passengers - a + b;
    maxPass = max(passengers, maxPass);
  }
  cout << maxPass;
}

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
