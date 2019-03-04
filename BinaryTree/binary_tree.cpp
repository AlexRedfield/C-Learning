#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define OVERFLOW -2
#define OK 1
#define ERROR 0

typedef int Status;
typedef int TElemType;
#pragma warning(disable:4996)	
/*
 * �洢�ṹ
 */
typedef struct BiTNode
{
	TElemType data;    //����
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

/*
 * ����������,����0��ʾ��������
 */
Status CreateBiTree(BiTree *T)
{
	TElemType e;
	scanf("%d", &e);
	if (e == 0)
	{
		*T = NULL;
	}
	else
	{
		*T = (BiTree)malloc(sizeof(BiTNode));
		if (!T)
		{
			exit(OVERFLOW);
		}
		(*T)->data = e;
		CreateBiTree(&(*T)->lchild);    //����������
		CreateBiTree(&(*T)->rchild);    //����������
	}
	return OK;
}

/*
 * ����Ԫ��
 */
void visit(TElemType e)
{
	printf("%d ", e);
}

/*
 * ���������������ָ�ȷ��ʸ���Ȼ����ʺ��ӵı�����ʽ
 */
Status PreOrderTraverse(BiTree T)
{
	if (T)
	{
		visit(T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
	return OK;
}

/*
 * ���������������ָ�ȷ������ң����ӣ�Ȼ����ʸ����������ң��󣩺��ӵı�����ʽ
 */
Status InOrderTraverse(BiTree T, void(*visit)(TElemType))
{
	if (T)
	{
		InOrderTraverse(T->lchild, visit);
		visit(T->data);
		InOrderTraverse(T->rchild, visit);
	}
	return OK;
}

/*
 * ���������������ָ�ȷ��ʺ��ӣ�Ȼ����ʸ��ı�����ʽ
 */
Status PostOrderTraverse(BiTree T, void(*visit)(TElemType))
{
	if (T)
	{
		PostOrderTraverse(T->lchild, visit);
		PostOrderTraverse(T->rchild, visit);
		visit(T->data);
	}
	return OK;
}

int main()
{
	BiTree T;
	printf("������������0Ϊ������\n");
	CreateBiTree(&T);
	printf("���������");
	PreOrderTraverse(T);
	printf("\n���������");
	InOrderTraverse(T, *visit);
	printf("\n���������");
	PostOrderTraverse(T, *visit);
	printf("\n");

	system("Pause");
	return 0;
}