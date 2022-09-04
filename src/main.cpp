#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		int c, v;
		cin >> c >> v;

		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
	}

	return 0;
}