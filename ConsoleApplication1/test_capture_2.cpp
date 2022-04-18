#include <algorithm>
#include <stdlib.h>
#include <iostream>
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[_countof(a)];
	int k;
	std::cout << "‰½”{‚µ‚Ü‚·‚©H ";
	if (std::cin >> k) {
		//“ü—Í¬Œ÷
		std::transform(a, std::end(a), b, [k](int n) {return k * n; });
		//std::for_each(b, std::end(b), [](int n) {std::cout << n << '\n'; });
		for (const auto n : b)
			std::cout << n << '\n';
	}
}
