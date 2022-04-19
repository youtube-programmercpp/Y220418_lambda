#include <vector>
#include <algorithm>
int main()
{
	std::vector<int> a{ 50, 100, -30, 99, -5 };
	a.erase(std::remove_if(a.begin(), a.end(), [](int value) {return value < 0; }), a.end());
	for (auto it = a.begin(); it != a.end();) {
		if (*it < 0)
			it = a.erase(it);
		else
			++it;
	}
}
