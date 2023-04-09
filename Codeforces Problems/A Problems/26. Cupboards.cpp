#include<bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  int value; 
  int lcount_0(0), rcount_0(0);
  for(int i = 0; i < n; ++i) {
    cin >> value;
    if(value) lcount_0++;
    cin >> value;
    if(value) rcount_0++;
  }
  int result = min(lcount_0, n - lcount_0) + min(rcount_0, n - rcount_0);
  cout << result;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
