#include<bits/stdc++.h>

using namespace std;

void solve() 
{

  int n;
  cin >> n;
  int point;
  cin >> point; --n;
  int min(point), max(point);
  int amazingCount = 0;

  for(int i = 0; i < n; ++i) {
    cin >> point;
    if(point < min) {
      amazingCount++;
      min = point;
    }
    if(point > max) {
      amazingCount++;
      max = point;
    }
  }
  cout << amazingCount;
}

int main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
