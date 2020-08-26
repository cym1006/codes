
#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

template<class T>
struct Node
{
	Node<T>* next;
	T value;

	Node(const T& x) :value(x), next(NULL)
	{}
};

template<class T>
class List
{
	typedef Node<T> Node;
public:
	List() :head_(NULL), tail_(NULL)
	{
	}
	~List()
	{
		Clear();
	}
	void Clear() //清空链表
	{
		Node *cur = head_;
		while (cur)
		{
			Node *next = cur->next;
			delete cur;
			cur = next;
		}
		head_ = tail_ = NULL;
	}
	void Print() //打印链表
	{
		Node *cur = head_;
		while (cur)
		{
			cout << cur->value << " ";
			cur = cur->next;
		}
		cout << endl;
	}
	void AddRight(const T& x) //右插入
	{
		if (head_ == NULL)
		{
			head_ = tail_ = new Node(x);
		}
		else
		{
			Node* tmp = new Node(x);
			tail_->next = tmp;
			tail_ = tmp;
		}
	}
	void AddLeft(const T& x) //左插入
	{
		if (head_ == NULL)
		{
			head_ = tail_ = new Node(x);
		}
		else
		{
			Node *tmp = new Node(x);
			tmp->next = head_;
			head_ = tmp;
		}
	}
	void PopBack()//尾部删除
	{
		if (head_ == NULL)
		{
			return;
		}
		else if (head_->next == NULL)
		{
			delete tail_;
			head_ = tail_ = NULL;
		}
		else
		{
			Node* tmp = head_;
			while (tmp->next != tail_)
			{
				tmp = tmp->next;
			}
			delete tail_;
			tail_ = tmp;
			tail_->next = NULL;
			tmp = NULL;
		}
	}
	void PopFront()//头删
	{
		if (head_ == NULL)
		{
			return;
		}
		else if (head_->next == NULL)
		{
			delete head_;
			head_ = tail_ = NULL;
		}
		else
		{
			Node* del = head_;
			head_ = del->next;
			delete del;
			del = NULL;
		}
	}
	Node* Find(const T &x)//查找元素
	{
		if (head_ == NULL)
		{
			return NULL;
		}
		else
		{
			Node* cur = head_;
			while (cur != NULL)
			{
				if (cur->value == x)
				{
					return cur;
				}
				else
				{
					cur = cur->next;
				}
			}
		}
	}
	void Insert(Node* pos, const T &x)//在指定元素前插入数据
	{
		if (pos == NULL)
		{
			return;
		}
		else if (pos == head_)
		{
			AddLeft(x);
		}
		else
		{
			Node *tmp = new Node(x);
			Node *cur = head_;
			while (cur->next != pos)
			{
				cur = cur->next;
			}
			tmp->next = pos;
			cur->next = tmp;
		}
	}
	void Erase(Node* pos)//删除指定位置元素
	{
		assert(pos);
		if (pos == head_)
		{
			head_ = head_->next;
			delete pos;
		}
		else
		{
			Node* cur = head_;
			while (cur->next != pos)
			{
				cur = cur->next;
			}
			cur->next = pos->next;
			delete pos;
			pos = NULL;
		}
	}
	//////////////////////////////////////////////////////////////////////////////////////////
	void Remove(const T &x)//删除所有值为x的元素
	{
		assert(head_);
		while (head_->value == x)
		{
			Node* del = head_;
			head_ = head_->next;
			delete del;
			del = NULL;
		}
		Node *cur = head_;
		Node *tmp = head_->next;
		while (tmp != NULL)
		{

			while (tmp->value == x)
			{
				cur->next = tmp->next;
				delete tmp;
				tmp = NULL;
				tmp = cur->next;
			}
			if (tmp == NULL)
			{
				break;
			}
			cur = cur->next;
			tmp = tmp->next;
		}
	}
	void Destroy()//销毁单链表
	{
		if (head_ == NULL)
		{
			head_ = tail_ = NULL;
		}
		else
		{
			Node* cur = head_;
			while (cur != NULL)
			{
				cur= cur->next;
				delete head_;
				head_ = cur;
			}
			head_ = tail_ = NULL;
		}
	}
	Node* Reverse()//逆置单链表
	{
		Node* cur = head_->next;
		Node* pre = head_;
		Node* next1 = NULL;
		if (head_ == NULL || head_->next == NULL)
		{
			return NULL;
		}
		while (cur != NULL)
		{
			next1 = cur->next;
			cur->next = pre;
			pre = cur;
			cur = next1;
		}
		head_->next = NULL;//将头变成尾
		head_ = pre;
		return head_;
	}
protected:
	Node *head_;
	Node *tail_;
};