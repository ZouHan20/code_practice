#include"seqlist.h"
//��ʼ��
void Initseqlist(Seqlist * sl)
{
	sl->arr = NULL;
	sl->size = sl->Capacity = 0;
}
//���ٿռ�
void open_space(Seqlist* sl)
{
	if (sl->Capacity == sl->size)
	{
		Seqlisttype Newcapacity = sl->Capacity==0 ? 4:(sl->Capacity)*2;
		Seqlisttype * tmp =(Seqlisttype*) realloc(sl->arr, Newcapacity * sizeof(Seqlisttype));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		else
		{
			sl->arr = tmp;
			sl->Capacity = Newcapacity;
		}
	}
}
//β������
void push_at_the_end(Seqlist* sl, int x)
{
	assert(sl);
	open_space(sl);
	sl->arr[sl->size++] = x;
}
void push_at_the_front(Seqlist*  sl,int x)
{
	assert(sl);
	open_space(sl);
	int i = 0;
	for (i = 0; i <= sl->size; i++)
	{
		sl->arr[sl->size - i] = sl->arr[sl->size - i - 1];
	}
	sl->arr[0] = x;
	sl->size++;
}
//β��ɾ��
void delete_at_the_end(Seqlist* sl)
{
	assert(sl);
	assert(sl->size);
	sl->size--;
}
void delete_at_the_front(Seqlist* sl)
{
	assert(sl);
	assert(sl->size);
	int i = 0;
	for (i == sl->size; i > 0; i--)
	{
		sl->arr[sl->size - i] = sl->arr[sl->size - i + 1];
	}
	sl->size--;
}
//��ӡ
void print_seqlist(Seqlist sl)
{
	int i = 0;
	for (i = 0; i<sl.size; i++)
	{
		printf("%d ",sl.arr[i]);
	}

}
//����
void Destoryseqlist(Seqlist * sl)
{
	if (sl->arr)
	{
		free(sl->arr);
	}
	sl->arr = NULL;
	sl->size = 0;
	sl->Capacity = 0;
}