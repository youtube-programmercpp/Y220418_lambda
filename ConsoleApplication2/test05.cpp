#include <algorithm>
#include <string.h>
int main()
{
	//          012345678
	char s[] = "AAABCCDD";
	*std::unique(s, &s[strlen(s)]) = '\0';

}
