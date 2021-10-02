#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ss second
#define ff first
// template< typename T>

string solve(string &s, int n) {

	string str = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			str += s[i];
		}
		else if (s[i] == 'R') {
			str += s[i];
		}
		else if (s[i] == 'U') {
			str += 'D';
		}
		else {
			str += 'U';
		}
	}

	return str;
}


signed main() {

#ifndef ONLINE_JUDGE
	freopen("/home/abhishek/Desktop/Codeforces/input21.in", "r", stdin);
	freopen("/home/abhishek/Desktop/Codeforces/output21.in", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		string s;

		cin >> n;
		cin >> s;
		cout << solve(s, n) << endl;
	}

	return 0;
}