#include <bits/stdc++.h>

using namespace std;

const int MAX = (int) 255;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// create a two-dimensional boolean vector that holds two sets of alphabet letters 
		// from 'A' to 'Z' and set all its value to false (initial)
		vector<vector<bool>> visited(MAX, vector<bool>(MAX));
		for (char a = 'A'; a <= 'Z'; a++) {
			for (char b = 'A'; b <= 'Z'; b++) {
				visited[a][b] = false;
			}
		}
		// check every pair of contiguous substrings if they are already formed
		// if not, then increment the value of 'cnt'
		int cnt = 0;
		for (int i = 0; i + 1 < (int) s.size(); i++) {
			if (!visited[s[i]][s[i + 1]]) {
				visited[s[i]][s[i + 1]] = true;
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
