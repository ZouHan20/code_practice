//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//menu()
//{
//	printf("#################################\n");
//	printf("######   1,�ӷ�  2������  #######\n");
//	printf("######   3,�˷�  4������  #######\n");
//	printf("#################################\n");
//	printf("�������Ҫ�˳��밴0��              \n");
//}
////int cauculate(int choice,int x,int y)
////{
////	if (choice == 1)
////	{
////		return x + y;
////	}
////	if (choice == 2)
////	{
////		return x - y;
////	}
////	if (choice == 3)
////	{
////		return x * y;
////	}
////	if (choice == 4)
////	{
////		return x / y;
////	}
////}
//int add (int x,int y)
//{
//	return x + y;
//}
//int jian (int x, int y)
//{
//	return x - y;
//}
//int cheng (int x, int y)
//{
//	return x * y;
//}
//int chu (int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int choice = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("������ѡ��");
//		scanf("%d", &choice);
//		if (choice >= 1 && choice <= 4)
//		{
//			printf("������������������");
//			scanf("%d  %d", &x, &y);
//			//int ret = cauculate(choice,x, y);
//			int (*pa[5])(int, int) = {0,add,jian,cheng,chu};
//			int ret = (*pa[choice])(x,y);
//			printf("%d\n", ret);
//		}
//		else if (choice == 0)
//		{
//			printf("��������");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (choice);
//	return 0;
//}