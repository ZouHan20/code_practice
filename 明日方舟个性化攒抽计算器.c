#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <windows.h>
#include<math.h>
void game()
{
	
	/*常规*/
	int hcy = 0;
	int day = 0;
	int week = 0;
	int month = 0;
	int oact = 0;
	int nact = 0;
	/*重点*/
	int newyearday = 29300;//新年
	int celebration = 28000;//周年
	int summer = 22400;//夏活
	int cuo = 240 * day;//搓玉
	int money = 200 * day;//月卡
	//新玩家再减去2000*oact
	printf("请输入现有资源（单位合成玉/个）");
	scanf("%d", &hcy);
	printf("请输入攒抽日数");
	scanf("%d", &day);
	printf("请输入攒抽周数");
	scanf("%d", &week);
	printf("请输入攒抽月数");
	scanf("%d", &month);
	printf("请输入攒抽期间经过的复刻sidestory数");
	scanf("%d", &oact);
	printf("请输入攒抽期间新的sidestory数");
	scanf("%d", &nact);
	int data[] = { 0,0,0,0,0,0,0,0,0,0,0 };
	//0,1,2,3,4,5,6,7,8,9,10
	data[0] = hcy;//现有
	data[1] = 100 * day;//日常
	data[2] = 2300 * week;//周常
	data[3] = 2400 * month;//月常
	data[4] = 3800 * oact;//复刻活动（老玩家
	data[5] = 1800 * nact;//新sidestory（包括四大大活动）
	data[6] = 2300;//新剿灭直接加算
	data[7] = 200 * 2 * (oact + nact);//闪断更新
	data[8] = 33600;//黄票
	//data[9]是否搓玉
	//data[10]是否月卡
	int add1 = 0;
	int i = 0;
	for (i = 0; i <= 8;i++)
	{
		add1 = add1 + data[i];
	}
	int meng = 0;
	printf("你是萌新吗？是-回复1，不是-回复0");
	scanf("%d", &meng);
	if (meng == 0)
	{
		add1 = add1;
	}
	else if (meng == 1)
	{
		add1 = add1 - 2000 * oact;
	}
	int meng1 = 0;
	printf("你搓玉吗？是-回复1，不是-回复0");
	scanf("%d", &meng1);
	if (meng1 == 0)
	{
		add1 = add1;;
	}
	else if (meng1 == 1)
	{
		add1 = add1 + cuo;
	}
	int meng2 = 0;
	printf("你买月卡吗？是-回复1，不是-回复0");
	scanf("%d", &meng2);
	if (meng2 == 0)
	{
		add1 = add1;
	}
	else if (meng2 == 1)
	{
		add1 = add1 + money;
	}
	int meng3 = 0;
	printf("你为什么攒抽？春节回复0，周年庆回复1，夏活回复2");
	scanf("%d", &meng3);
	if (meng3 == 0)
	{
		add1 = add1 + newyearday;
	}
	else if (meng3 == 1)
	{
		add1 = add1 + celebration;
	}
	else if (meng3 == 2)
	{
		add1 = add1 + summer;
	}
	printf("计算结束，你一共可以攒%d合成玉", add1);
	Sleep(3000);
}
int main()
{
	printf("本程序由未来的上市五百强企业程序架构师周涵制作！(doge)\n感谢您的使用！\n");
	Sleep(3000);
	printf("博士，要开始计算攒抽数据吗？按1键开始，按0键退出");
	int start = 0;
	scanf("%d", &start);
	if (start == 1)
	{
		game();
	}
	else
	{
		printf("结束使用\n");
	}
	return 0;
}
