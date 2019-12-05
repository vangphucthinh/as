#include"Header.h"

using namespace std;

NODE* CreateNode(int data)
{
	NODE* node = new NODE;
	node->key = data;
	node->p_left = NULL;
	node->p_right = NULL;
	node->height = 1;

	return node;
}

//Pre-order
void NLR(NODE* p_root)
{
	if (p_root == NULL)
	{
		return;
	}

	cout << p_root->key << " ";

	NLR(p_root->p_left);

	NLR(p_root->p_right);
}

//In-order
void LNR(NODE* p_root)
{
	if (p_root == NULL)
	{
		return;
	}

	LNR(p_root->p_left);

	cout << p_root->key << " ";

	LNR(p_root->p_right);
}

//Post-order
void LRN(NODE* p_root)
{
	if (p_root == NULL)
	{
		return;
	}

	LRN(p_root->p_left);

	LRN(p_root->p_right);

	cout << p_root->key << " ";
}

//Level-order
//void LevelOrder(NODE* p_root)

NODE* Search(NODE* p_root, int x)
{
	if (p_root == NULL)
	{
		return NULL;
	}

	if (p_root->key == x)
	{
		return p_root;
	}
}

void Insert(NODE*& p_root, int x)
{
	if (p_root == NULL)
	{
		p_root = CreateNode(x);
	}

	if (p_root->key > x)
	{
		Insert(p_root->p_left, x);
	}
	else if (p_root->key < x)
	{
		Insert(p_root->p_right, x);
	}
	else
	{
		return;
	}
}

//void Remove(NODE*& p_root, int x)
//{
//	if (p_root == NULL)
//	{
//		return;
//	}
//
//}

int Height(NODE* p_root)
{
	if (p_root == NULL)
	{
		return 0;
	}

	return p_root->height;
}

int CountNode(NODE* p_root)
{
	int count = 0;

	if (p_root != NULL)
	{
		CountNode(p_root->p_left);

		count++;

		CountNode(p_root->p_right);
	}

	return count;
}