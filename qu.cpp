#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long x, y;
		cin >> x >> y;
		long long ans = 0;
		while (x != 1 || y != 1) {
			if (x > 1) {
				x = x / 2;
				ans++;
			}
			if (y > 1) {
				y = y / 2;

				ans++;
			}

		}
		cout << ans << endl;
	}
}