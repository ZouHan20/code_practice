//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	size_t ret = strlen("abc") - strlen("abcdef");
//	if(ret>0)
//	{
//		printf("没问题\n");
//	}
//	else
//	{
//		printf("有问题\n");
//	}
//	printf("%zd\n", ret);
//	return 0;
//}
//模拟strlen函数1
//int my_strlen_1(const char*arr)
//{
//	int count = 0;
//	while (*arr)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int my_strlen_2(const char* arr)
//{
//	char* start = arr;
//	while(*arr)
//	//while(*arr!='\0')
//	{
//		arr++;
//	}
//	return arr - start;
//}
//int my_strlen_3(const char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen_3(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//int ret = my_strlen_1(arr);
//	//int ret = my_strlen_2(arr);
//	int ret = my_strlen_3(arr);
//	printf("%d\n", ret);
//	return 0;
//}
