///*
//#pragma once
//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int value;
//	Node* next;
//	Node(int a = 0, Node* n = NULL) :value(a), next(n) {}
//};
//
//
//class List
//{
//private:
//	Node* _head = NULL;
//	Node* _tail = NULL;
//	int size = 0;
//public:
//	List();
//	~List();
//	int GetSize()
//	{
//		return size;//得到链表大小
//	}
//	void Print();//打印该链表
//	void AddRight(int a);//右插入
//	void AddLeft(int a);//左插入
//	void Remove(int a);//删除节点
//	void Clear();
//};
//
//List::List() :_head(NULL), _tail(NULL)
//{
//}
//List::~List()
//{
//	Clear();
//}
//void List::AddRight(int a)//右插入
//{
//	Node *p = new Node(a);
//	if (_head != NULL)
//	{
//		_tail->next = p;
//		_tail = p;
//	}
//	else
//	{
//		_head = p;
//		_tail = p;
//	}
//	size++;
//}
//void List::AddLeft(int a)//左插入
//{
//	Node *p = new Node(a);
//	if (_head != NULL)
//	{
//		p->next = _head;
//		_head = p;
//	}
//	else
//	{
//		_head = p;
//		_tail = p;
//	}
//	size++;
//}
//void List::Remove(int a)//删除节点
//{
//	Node* p = _head;
//	bool flag = false;
//	if (_head == NULL)
//	{
//		flag = false;
//		cout << "空链表，无法删除节点" << endl;
//	}
//	else if (_head->value == a && _head != _tail)//当要删除的数据在头节点上且不只有一个节点时
//	{
//
//
//		_head = _head->next;
//		delete p;
//		size--;
//		flag == true;
//		cout << "节点删除成功" << endl;
//	}
//	else if (_head->value == a && _head == _tail)//当要删除的数据在头节点上且只有一个节点时
//	{
//		_head = NULL;
//		_tail = NULL;
//		delete p;
//		size--;
//		flag = true;
//		cout << "删除节点成功" << endl;
//	}
//	else//删除的数据不在头节点上时
//	{
//		Node* q = _head->next;
//		while (q)
//		{
//			if (q->value == a && q != _tail)
//			{
//				p->next = q->next;
//				delete q;
//				size--;
//				flag = true;
//				cout << "删除节点成功" << endl;
//				break;
//			}
//			else if (q->value == a && q == _tail)
//			{
//				p->next = NULL;
//				_tail = p;
//				delete q;
//				size--;
//				flag = true;
//				cout << "删除节点成功" << endl;
//				break;
//			}
//			else
//			{
//				p = q;
//				q = p->next;
//			}
//		}
//		if (!flag)
//		{
//			cout << "该值不存在" << a << endl;
//		}
//	}
//}
//void List::Print()
//{
//	if (_head == NULL)
//	{
//		cout << "该链表为空链表" << endl;
//	}
//	else
//	{
//		Node*p = _head;
//		while (p != NULL)
//		{
//			cout << p->value << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//}
//void List::Clear()
//{
//	while (_head)
//	{
//		Node* cur = _head;
//		_head = _head->next;
//		delete cur;
//	}
//	_head = _tail = NULL;
//}
