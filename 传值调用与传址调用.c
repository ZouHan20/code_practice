//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//利用传址调用，实现双整数位置互换。
//void HUAN(int* pa, int* pb)
//{
//	int z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("互换之前：%d %d", a, b);
//	HUAN(&a, &b);
//	printf("互换之后：%d %d", a, b);
//	return 0;
//}
//直接互换地址
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("互换之前：%d %d", a, b);
//	int *d = &a;
//	int *e = &b;
//	int f = 0;
//	f = d;
//	d = e;
//	e = f;
//	printf("互换之后：%d %d", a, b);
//	return 0;
//}