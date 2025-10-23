#include"seqlist.h"
void tast01()
{
	int x = 0;
	//创建一个顺序表
	Seqlist  sl;
	//初始化顺序表
	Initseqlist( &sl );



	//开辟空间
	
	//尾部插入
	push_at_the_end(&sl, 5);
	push_at_the_end(&sl, 6);
	push_at_the_end(&sl, 8);
	push_at_the_end(&sl, 9);
	push_at_the_end(&sl, 3);
	push_at_the_end(&sl, 4);
	push_at_the_end(&sl, 7);
	push_at_the_end(&sl, 1);



	//头插法
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 5);
	push_at_the_front(&sl, 8);
	push_at_the_front(&sl, 8);






	//尾部删除
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//delete_at_the_end(&sl);
	//头部删除法
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
	//打印
	print_seqlist(sl);
	//销毁顺序表
	Destoryseqlist( &sl );

}
int main()
{
	tast01();
	return 0;
}

