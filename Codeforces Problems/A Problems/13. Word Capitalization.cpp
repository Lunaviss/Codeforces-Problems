#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
  string word;
  cin >> word;
  if (word[0] > 90)
    word[0] -= 32;
  cout << word;
}
 
int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
