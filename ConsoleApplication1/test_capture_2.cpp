#include <algorithm>
#include <stdlib.h>
#include <iostream>
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[_countof(a)];
	int k;
	std::cout << "何倍しますか？ ";
	if (std::cin >> k) {
		//入力成功
		std::transform(a, std::end(a), b, [k](int n) {return k * n; });
		//std::for_each(b, std::end(b), [](int n) {std::cout << n << '\n'; });
		for (const auto n : b)
			std::cout << n << '\n';
	}
}
