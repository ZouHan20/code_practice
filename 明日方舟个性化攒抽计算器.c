#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <windows.h>
#include<math.h>
void game()
{
	
	/*����*/
	int hcy = 0;
	int day = 0;
	int week = 0;
	int month = 0;
	int oact = 0;
	int nact = 0;
	/*�ص�*/
	int newyearday = 29300;//����
	int celebration = 28000;//����
	int summer = 22400;//�Ļ�
	int cuo = 240 * day;//����
	int money = 200 * day;//�¿�
	//������ټ�ȥ2000*oact
	printf("������������Դ����λ�ϳ���/����");
	scanf("%d", &hcy);
	printf("�������ܳ�����");
	scanf("%d", &day);
	printf("�������ܳ�����");
	scanf("%d", &week);
	printf("�������ܳ�����");
	scanf("%d", &month);
	printf("�������ܳ��ڼ侭���ĸ���sidestory��");
	scanf("%d", &oact);
	printf("�������ܳ��ڼ��µ�sidestory��");
	scanf("%d", &nact);
	int data[] = { 0,0,0,0,0,0,0,0,0,0,0 };
	//0,1,2,3,4,5,6,7,8,9,10
	data[0] = hcy;//����
	data[1] = 100 * day;//�ճ�
	data[2] = 2300 * week;//�ܳ�
	data[3] = 2400 * month;//�³�
	data[4] = 3800 * oact;//���̻�������
	data[5] = 1800 * nact;//��sidestory�������Ĵ����
	data[6] = 2300;//�½���ֱ�Ӽ���
	data[7] = 200 * 2 * (oact + nact);//���ϸ���
	data[8] = 33600;//��Ʊ
	//data[9]�Ƿ����
	//data[10]�Ƿ��¿�
	int add1 = 0;
	int i = 0;
	for (i = 0; i <= 8;i++)
	{
		add1 = add1 + data[i];
	}
	int meng = 0;
	printf("������������-�ظ�1������-�ظ�0");
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
	printf("���������-�ظ�1������-�ظ�0");
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
	printf("�����¿�����-�ظ�1������-�ظ�0");
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
	printf("��Ϊʲô�ܳ飿���ڻظ�0��������ظ�1���Ļ�ظ�2");
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
	printf("�����������һ��������%d�ϳ���", add1);
	Sleep(3000);
}
int main()
{
	printf("��������δ�����������ǿ��ҵ����ܹ�ʦ�ܺ�������(doge)\n��л����ʹ�ã�\n");
	Sleep(3000);
	printf("��ʿ��Ҫ��ʼ�����ܳ������𣿰�1����ʼ����0���˳�");
	int start = 0;
	scanf("%d", &start);
	if (start == 1)
	{
		game();
	}
	else
	{
		printf("����ʹ��\n");
	}
	return 0;
}
