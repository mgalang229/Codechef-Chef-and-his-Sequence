#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mxN = 1e3;
int a[mxN], b[mxN], n, m;

void decode() {
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	cin >> m;
	for(int i = 0; i < m; ++i) {
		cin >> b[i];
	}
	int flag = 0, cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] == b[cnt]) {
			cnt++;
		}
		if(cnt == m) {
			flag = 1;
			break;
		}
	}
	if(flag == 1) cout << "Yes";
	else cout << "No";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
