#include <stdio.h>
#include <ctype.h>
template<class T, class T2>void f(const char* p, const T& fn, const T2& fn2)
{
	for (;;) {
		const int ch = fn(*p);
		if (ch == '\0')
			break;
		else {
			fn2(ch);
			++p;
		}
	}
}
int main()
{
	f("小文字から大文字に変換：abcdefg\n", [ ](unsigned char ch) 
		{
			return toupper(ch);
		}, putchar	
	);
	f("大文字から小文字に変換：ABCDEFG\n", [](unsigned char ch)
		{
			return tolower(ch);
		}, putchar
	);
}