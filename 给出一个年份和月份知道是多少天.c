#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
bool is_leap_year(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	else
		return false;
}
int get_days_of_month(int month,int year)
{
	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int i = month;
	if (is_leap_year && month==2)
		return arr[i] + 1;
	else
	return arr[i];
}
int main()
{
	int month = 0;
	int year = 0;
	scanf("%d",&month ,&year);
	int day = get_days_of_month(month,year);
	printf("%d", day);
	return 0;
}