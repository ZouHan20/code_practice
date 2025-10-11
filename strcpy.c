//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//#include<assert.h>
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[15] = { 'a','b','c','d','e','f','g','h','i','\0' };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%zd\n", strlen(arr2));
//	return 0;
//}
//Ä£Äâstrcpyº¯Êý
//char* my_strcpy(char*destination,const char*source)
//{
//	assert(destination != NULL);
//	assert(source != NULL);
//	char* start = destination;
//	while (*source != '\0')
//	{
//		*destination = *source;
//		destination++;
//		source++;
//	}
//	*destination = *source;
//	return start;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	char* ret = my_strcpy(arr2,arr1);
//	printf("%s\n", ret);
//	return 0;
//}