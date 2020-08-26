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
//		return size;//�õ������С
//	}
//	void Print();//��ӡ������
//	void AddRight(int a);//�Ҳ���
//	void AddLeft(int a);//�����
//	void Remove(int a);//ɾ���ڵ�
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
//void List::AddRight(int a)//�Ҳ���
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
//void List::AddLeft(int a)//�����
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
//void List::Remove(int a)//ɾ���ڵ�
//{
//	Node* p = _head;
//	bool flag = false;
//	if (_head == NULL)
//	{
//		flag = false;
//		cout << "�������޷�ɾ���ڵ�" << endl;
//	}
//	else if (_head->value == a && _head != _tail)//��Ҫɾ����������ͷ�ڵ����Ҳ�ֻ��һ���ڵ�ʱ
//	{
//
//
//		_head = _head->next;
//		delete p;
//		size--;
//		flag == true;
//		cout << "�ڵ�ɾ���ɹ�" << endl;
//	}
//	else if (_head->value == a && _head == _tail)//��Ҫɾ����������ͷ�ڵ�����ֻ��һ���ڵ�ʱ
//	{
//		_head = NULL;
//		_tail = NULL;
//		delete p;
//		size--;
//		flag = true;
//		cout << "ɾ���ڵ�ɹ�" << endl;
//	}
//	else//ɾ�������ݲ���ͷ�ڵ���ʱ
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
//				cout << "ɾ���ڵ�ɹ�" << endl;
//				break;
//			}
//			else if (q->value == a && q == _tail)
//			{
//				p->next = NULL;
//				_tail = p;
//				delete q;
//				size--;
//				flag = true;
//				cout << "ɾ���ڵ�ɹ�" << endl;
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
//			cout << "��ֵ������" << a << endl;
//		}
//	}
//}
//void List::Print()
//{
//	if (_head == NULL)
//	{
//		cout << "������Ϊ������" << endl;
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
