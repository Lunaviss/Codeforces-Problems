#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N, A, B;
  cin >> N >> A >> B;
  string participants;
  cin >> participants;
  int length = participants.length();
  int remaining = A + B;
  int overseaRemaining = B;
  for(int i = 0; i < length; ++i) {
    if(participants[i] == 'c') {
      cout << "No\n";
      continue;
    }
    if(remaining == 0)
      cout << "No\n";
    else
      if(participants[i] == 'a') {
        cout << "Yes\n";
        remaining--;
      }
      else
        if(overseaRemaining <= 0) {
          cout << "No\n";
          continue;
        }
        else {
          cout << "Yes\n";
          remaining--;
          overseaRemaining--;
        }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // freopen("learning.INP", "r", stdin);
  solve();
  return 0;
}
