#include <algorithm>
#include <iostream>
int main()
{
	int a[] = { -1, 1, 20, 50, 99, 800 };
	
	if (std::all_of(a, std::end(a), [](int n) 
		{

			return n > 0;

		})) {
		//全部が true である…全部が n > 0 を満たす…全部が正である
		std::cout << "全てが正\n";
	}
	else {
		//どれか一つ（またはそれ以上）が n > 0 を満たさない…どれかは負または０である
		std::cout << "どれかは 0 か負\n";
	}
}
