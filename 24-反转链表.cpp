//// 题目：定义一个函数，输入一个链表的头结点，反转该链表并输出反转后链表的
//// 头结点。
//#include <cstdio>
//#include "List.h"
//
//ListNode* ReverseList(ListNode* pHead){
//	//创建三个节点：当前，前一个，后一个
//	ListNode* pReversedHead = nullptr;
//	ListNode* pNode = pHead;
//	ListNode* pPrev = nullptr;
//
//	while (pNode != nullptr)
//	{
//		//保留当前节点的下一个节点
//		ListNode* pNext = pNode->m_pNext;
//		if (pNext == nullptr)
//		{
//			pReversedHead = pNode;
//		}
//		//将当前节点的下一个节点的指针指向当前节点的上一个节点
//		pNode->m_pNext = pPrev;
//		pPrev = pNode;
//		pNode = pNext;
//	}
//	return pReversedHead;
//}
//// ====================测试代码====================
//ListNode* Test(ListNode* pHead)
//{
//	printf("The original list is: \n");
//	PrintList(pHead);
//
//	ListNode* pReversedHead = ReverseList(pHead);
//
//	printf("The reversed list is: \n");
//	PrintList(pReversedHead);
//
//	return pReversedHead;
//}
//
//// 输入的链表有多个结点
//void Test1()
//{
//	ListNode* pNode1 = CreateListNode(1);
//	ListNode* pNode2 = CreateListNode(2);
//	ListNode* pNode3 = CreateListNode(3);
//	ListNode* pNode4 = CreateListNode(4);
//	ListNode* pNode5 = CreateListNode(5);
//
//	ConnectListNodes(pNode1, pNode2);
//	ConnectListNodes(pNode2, pNode3);
//	ConnectListNodes(pNode3, pNode4);
//	ConnectListNodes(pNode4, pNode5);
//
//	ListNode* pReversedHead = Test(pNode1);
//
//	DestroyList(pReversedHead);
//}
//
//// 输入的链表只有一个结点
//void Test2()
//{
//	ListNode* pNode1 = CreateListNode(1);
//
//	ListNode* pReversedHead = Test(pNode1);
//
//	DestroyList(pReversedHead);
//}
//
//// 输入空链表
//void Test3()
//{
//	Test(nullptr);
//}
//
//int main(int argc, char* argv[])
//{
//	Test1();
//	Test2();
//	Test3();
//
//	return 0;
//}
