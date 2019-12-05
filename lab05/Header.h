#pragma once
#include<iostream>

using namespace std;

struct NODE 
{
	int key;
	NODE* p_left;
	NODE* p_right;
	int height;
};

NODE* CreateNode(int data);
void NLR(NODE* p_root);
void LNR(NODE* p_root);
void LRN(NODE* p_root);
//void LevelOrder(NODE* p_root);
NODE* Search(NODE* p_root, int x);
void Insert(NODE*& p_root, int x);
//void Remove(NODE*& p_root, int x);
int Height(NODE* p_root);
int CountNode(NODE* p_root);
