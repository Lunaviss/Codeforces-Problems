#include<bits/stdc++.h>

using namespace std;

int toggle(int n) {
	if (n == 0)
		return 1;
	return 0;
}

void solve() {
	int const size_of_grid = 3;
	int grid[size_of_grid][size_of_grid];
	int light_grid[size_of_grid][size_of_grid];

	for(int i = 0; i < size_of_grid; ++i) 
		for(int j = 0; j < size_of_grid; ++j) {
			cin >> grid[i][j];
			if(grid[i][j] % 2 == 0) grid[i][j] = 0;
			else grid[i][j] = 1;
			light_grid[i][j] = 1;
		}

	for(int i = 0; i < size_of_grid; ++i)
		for(int j = 0; j < size_of_grid; ++j) {
			if(grid[i][j] == 1) {
				light_grid[i][j] = toggle(light_grid[i][j]);
				switch(i) {
					case 0:
						light_grid[i + 1][j] = toggle(light_grid[i + 1][j]);
						break;
					case 1:
						light_grid[i - 1][j] = toggle(light_grid[i - 1][j]);
						light_grid[i + 1][j] = toggle(light_grid[i + 1][j]);
						break;
					default:
						light_grid[i - 1][j] = toggle(light_grid[i - 1][j]);
				}
				switch(j) {
					case 0:
						light_grid[i][j + 1] = toggle(light_grid[i][j + 1]);
						break;
					case 1:
						light_grid[i][j - 1] = toggle(light_grid[i][j - 1]);
						light_grid[i][j + 1] = toggle(light_grid[i][j + 1]);
						break;
					default:
						light_grid[i][j - 1] = toggle(light_grid[i][j - 1]);
				}
			}
		}
	for(int i = 0; i < size_of_grid; ++i) {
		for(int j = 0; j < size_of_grid; ++j)
			cout << light_grid[i][j];
		cout << '\n';
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	solve();
	return 0;
}
