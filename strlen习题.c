#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char* p = "abcdefghijklmn";
	printf("%zd\n", strlen(&p));
	printf("%zd\n", strlen(&p+1));
	printf("%zd\n", strlen(&p[0]));
	printf("%zd\n", strlen(&p[0]+1));
	//int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//printf("%zd\n", sizeof(*a + 1));
	return 0;
}