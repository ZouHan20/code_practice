#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
//ÃÂ—È
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	memmove(arr+8,arr+1,36);
//	int i;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void* my_memove(void *dest,void *sor,size_t num)
//{
//	if ((char*)dest < (char*)sor)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)sor;
//			(char*)sor = (char*)sor + 1;
//			(char*)dest = (char*)dest + 1;
//		}
//	}
//	else if ((char*)dest < (char*)sor)
//	{
//		char* s1 = (char*)dest+num;
//		char* s2 = (char*)sor+num;
//
//		while (num--)
//		{
//			*(char*)s1 = *(char*)s2;
//			(char*)s1 = (char*)s1 + 1;
//			(char*)s2 = (char*)s2 + 1;
//		}
//	}
//}
//int main()
//{
//	int arr[20]= { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	my_memove(arr,arr+5,36);
//	        //dest sor num
//	int i;
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		return 0;
//	return 0;
//}