#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> p(n);
	int highest_price = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
		// store the highest price in the variable
		highest_price = max(highest_price, p[i]);
	}
	int winner_index = -1;
	for (int i = 0; i < n; i++) {
		if (p[i] == highest_price) {
			// if the price of a bidder matches the highest price, then save the index + 1
			winner_index = i + 1;
			// don't forget to break the loop
			break;
		}
	}
	int second_highest_price = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (p[i] != highest_price) {
			// only compare the second highest price, if it's not equal to the highest price
			second_highest_price = max(second_highest_price, p[i]);
		}
	}
	cout << winner_index << " " << second_highest_price << '\n';
	return 0;
}
