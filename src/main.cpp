#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	auto y = int{ 0 };
	while (a <= b) {
		a *= 3;
		b *= 2;
		y += 1;
	}

	cout << y;

	return 0;
}