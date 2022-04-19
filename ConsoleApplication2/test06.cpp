#include <algorithm>
#include <vector>
#include <string>
int main()
{
	std::vector<std::string> a{"ALPHA", "BETA", "GAMMA", "ALPHA", "BETA" };
	std::sort(a.begin(), a.end());
	a.erase(std::unique(a.begin(), a.end()), a.end());
}
