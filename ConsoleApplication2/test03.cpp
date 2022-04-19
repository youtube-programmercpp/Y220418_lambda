#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>
int main()
{
	std::vector<int> a = { 10, 500, -1, 999 };
	std::vector<int> b;
	std::transform(a.begin(), a.end(), std::back_inserter(b), [](int value)
		{
			return 2 * value;
		});
	std::copy(b.begin(), b.end(), std::ostream_iterator<int>(std::cout, "\n"));
	//range-based for •¶
	//for (const auto value : b) {
	//	std::cout << value << '\n';
	//}
}
