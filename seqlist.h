#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdlib.h>


#include<assert.h>

typedef int Seqlisttype;
//����һ��˳���
//ʵ������ɾ��//���ӷ�Ϊͷ���β��//ɾ����Ϊͷɾ��βɾ��
//��������ʼ�������١�
typedef struct Seqlist
{
	Seqlisttype * arr;
	size_t size;
	size_t Capacity;
}Seqlist;
//��ʼ��
void Initseqlist(Seqlist * sl);
//����
void Destoryseqlist(Seqlist * sl);

//���ٿռ�
void open_space(Seqlist* sl);

//β������
void push_at_the_end(Seqlist* sl, int x);

//��ӡ
void print_seqlist(Seqlist sl);

//ͷ������
void push_at_the_front(Seqlist * sl, int x);

//β��ɾ����
void delete_at_the_end(Seqlist* sl);
//ͷ��ɾ����
void delete_at_the_front(Seqlist* sl);


