#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int tot = 0;
	while (n--) {
		array<int, 3> arr;
		arr.fill(0);
		int count = 0;
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
			count += arr[i];
		}
		if (count >= 2)
			tot++;
	}
	cout << tot << "\n";
	return 0;
}