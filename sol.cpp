#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		set<string> st;
		// insert all contiguous substrings of length two (2) in a set and print its size
		for (int i = 0; i + 1 < (int) s.size(); i++) {
			st.insert(string(1, s[i]) + string(1, s[i + 1]));
		}
		cout << (int) st.size() << '\n';
	}
	return 0;
}
