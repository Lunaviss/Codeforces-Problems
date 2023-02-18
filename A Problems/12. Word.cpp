#include<bits/stdc++.h>

using namespace std;

string str;

string upperString(string str) {
  for (int i = 0; i < str.length(); ++i)
    if (str[i] > 96 && str[i] < 123)
      str[i] -= 32;
  return str;
}

string lowerString(string str) {
  for (int i = 0; i < str.length(); ++i)
    if (str[i] > 64 & str[i] < 91)
      str[i] += 32;
  return str;
}

void solve() {
  int lowerCnt(0), upperCnt(0);
  cin >> str;
  for (int i = 0; i < str.length(); ++i)
    if (str[i] > 90) lowerCnt++;
    else upperCnt++;
  if (lowerCnt >= upperCnt) cout << lowerString(str);
  else cout << upperString(str);
}

int main(int argc, char const *argv[])
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
