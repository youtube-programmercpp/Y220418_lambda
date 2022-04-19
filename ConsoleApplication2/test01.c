#include <stdio.h>
#include <stdlib.h>
int main()
{
	const int a[] = { 10, 20, 80, 500, 600 , 999};
	for (const int* p = a; p < &a[_countof(a)]; ++p) {
		printf("%d\n", *p);
	}
}
