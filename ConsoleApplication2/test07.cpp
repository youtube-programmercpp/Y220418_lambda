// test.07.cpp : std::front_inserter の使用例〔ライブ終了後に追加したソースファイル〕
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
#include <iostream>
#include <type_traits>
template<class T, std::enable_if_t<std::is_class<T>::value, bool> = true>std::ostream& operator<<(std::ostream& ostm, const T& r)
{
	const auto end = r.end();
	auto it = r.begin();
	if (it == end)
		return ostm;
	else {
		for (;;) {
			ostm << *it++;
			if (it == r.end())
				return ostm;
			else
				ostm << ", ";
		}
	}
}
int main()
{
	std::vector<int> a = { 1, 10, 100, 1000 };
	std::list  <int> b                       ;
	std::copy(a.begin(), a.end(), std::front_inserter(b));
	std::cout << "std::vector<int> a {" << a << "};\n";
	std::cout << "std::list  <int> b {" << b << "};\n";
}
