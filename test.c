#include"seqlist.h"
void tast01()
{
	int x = 0;
	//����һ��˳���
	Seqlist  sl;
	//��ʼ��˳���
	Initseqlist( &sl );



	//���ٿռ�
	
	//β������
	push_at_the_end(&sl, 5);
	push_at_the_end(&sl, 6);
	push_at_the_end(&sl, 8);
	push_at_the_end(&sl, 9);
	push_at_the_end(&sl, 3);
	push_at_the_end(&sl, 4);
	push_at_the_end(&sl, 7);
	push_at_the_end(&sl, 1);



	//ͷ�巨
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 5);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);






	//β��ɾ��
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//ͷ��ɾ����
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	delete_at_the_front(&sl);
	//��ӡ
	print_seqlist(sl);
	//����˳���
	Destoryseqlist( &sl );

}
int main()
{
	tast01();
	return 0;
}

