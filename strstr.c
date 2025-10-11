#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* cur = str1;
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//	
//}
//int main()
//{
//	char str1[] = "abbbcdef";
//	char str2[] = "bbbc";
//	char* answer = my_strstr(str1,str2);
//	printf("%s", answer);
//	return 0;
//}