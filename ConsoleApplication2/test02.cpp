#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
int main()
{
	std::vector<short> a{ 10, 20, 80, 500, 600 , 999 };
	//for (auto it = a.begin(); it != a.end(); ++it) {
	//	printf("%d\n", *it);
	//}
	std::for_each(a.begin(), a.end(), [](short value)
		{
			printf("%d\n", value);		
		}
	);
}
