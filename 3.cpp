#include<bits/stdc++.h>
using namespace std;
int rec(int n) {
	if (n == 1) return 1;

	int ans = n;

	return ans * rec(--n);



}
int main() {
	cout << rec(5) << endl ;
	int n = 9;
	cout << n*--n;


}