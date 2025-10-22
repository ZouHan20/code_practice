//#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//void Scanf_arr(int*arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);//arr[i]==*(arr+i)
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void Bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//进行9趟
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)//每一趟
//		{
//
//			if (arr[j] >arr[j + 1])
//			{
//				flag = 0;
//				int K = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = K;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Scanf_arr(arr,sz);
//	print(arr,sz);
//	printf("\n");
//	Bubble(arr,sz);
//	print(arr, sz);
//	return 0;
//}