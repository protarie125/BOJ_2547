#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;

		auto sum = ll{ 0 };
		for (int j = 0; j < n; ++j) {
			ll x;
			cin >> x;

			sum += (x % n);
		}

		if (0 == sum % n) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}

		cout << '\n';
	}

	return 0;
}