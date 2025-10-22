//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct hero
//{
//	char name;
//	int heat;
//	int life;
//};
//void print(struct hero *arr[3], size_t sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s  %d  %d", arr[i]);
//	}
//}
//int cmp_struct_name(int *arr[3],size_t sz,size_t width)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if ((*((char*)(arr + i*width))) > (*((char*)(arr + (1 + i)*width))))
//		{
//			char* parr = 0;
//			*parr = *(arr + i * width);
//			*(arr + i * width) = *(arr + (1 + i) * width);
//			*(arr + (1 + i) * width) = *parr;
//		}
//	}
//	return;
//}
//int main()
//{
//	int i = 0;
//	struct hero arr[3] = { {"Ama",1000,2000},{ "DIO",9999,99999 },{"JTL",99999999,999998589}};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]), cmp_struct_name(arr,sz, sizeof(arr[0])));
//	print(arr,sz);
//	return 0;
//}