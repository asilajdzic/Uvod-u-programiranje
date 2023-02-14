#include <stdio.h>
int strcmpi(const char *s1, const char *s2, int velikamala)
{
	if(velikamala==0)
	{
		while(*s1 && *s2)
		{
			if(*s1<*s2 && *s1<*s2-'a'-'A' )
			return -1;
			if(*s2<*s1  && *s2<*s1-'a'-'A' )
			return 1;
			s1++;
			s2++;
		}
		if(*s1)
		return 1;
		if(*s2)
		return -1;
		return 0;
		}
		while(*s1 && *s2)
	{
		if(*s1<*s2)
		return -1;
		if(*s2<*s1)
		return 1;
		s1++;
		s2++;
	}
	if(*s1)
	return 1;
	if(*s2)
	return -1;
	return 0;
}
int main() {
	printf("%d ", strcmpi("AAAA", "aaaa", 0));
	printf("%d", strcmpi("aAAA", "Aaaa", 1));

	return 0;
}
