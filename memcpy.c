#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
//memcpy函数的体验
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr + 2, 20);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//
// }
//模拟memcpy
//void* my_memcpy(void*dest,void*sor,int num)
//{
//	while (num--)
//	{
//		*(char*)dest = *(char*)sor;
//		(char*)sor = (char*)sor + 1;
//		(char*)dest = (char*)dest + 1;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr1[20] = { 0 };
//	my_memcpy(arr1,arr+2,32);
//	int i;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}