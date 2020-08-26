//#include"TemplateList.h"
//
//void test1()//尾插和头插
//{
//	List<int> s1;
//	s1.AddRight(3);
//	s1.AddRight(4);
//	s1.AddLeft(2);
//	s1.AddLeft(1);
//	s1.Print();
//}
//void test2() //尾删和头删
//{
//	List<int> s2;
//	s2.AddRight(3);
//	s2.AddRight(4);
//	s2.AddLeft(2);
//	s2.AddLeft(1);
//	s2.PopBack();
//	s2.PopBack();
//	s2.PopFront();
//	s2.PopFront();
//	s2.Print();
//}
//void test3() //指定元素前插入数据和销毁链表
//{
//	List<int> s3;
//	s3.AddRight(3);
//	s3.AddRight(4);
//	s3.AddLeft(2);
//	s3.AddLeft(1);
//	s3.Insert(s3.Find(1), 0);
//	s3.Print();
//	s3.Destroy();
//	s3.Print();
//}
//
//
//void test4() //单链表指定元素删除
//{
//	List<int> s4;
//	s4.AddRight(3);
//	s4.AddRight(8);
//	s4.AddRight(3);
//	s4.AddRight(3);
//	s4.AddRight(3);
//	s4.AddRight(1);
//	s4.AddRight(4);
//	s4.AddLeft(2);
//	s4.AddLeft(1);
//	s4.AddLeft(1);
//	s4.AddLeft(1);
//	s4.AddLeft(1);
//	s4.Remove(1);
//	/*s4.Remove(s4.Find(1));*/
//	s4.Print();
//}
//void test5() //单链表的逆置
//{
//	List<int> s5;
//	s5.AddRight(1);
//	s5.AddRight(2);
//	s5.AddLeft(3);
//	s5.AddLeft(4);
//	s5.Reverse();
//	s5.Print();
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	//test5();
//	return 0;
//}
///*void Test()
//{
//	List list1;
//	list1.AddRight(3);
//	list1.AddRight(4);
//	list1.AddLeft(5);
//	list1.AddLeft(6);
//	cout << "链表大小为：" << list1.GetSize() << endl;
//	list1.Print();
//	list1.Remove(5);
//	cout << "链表大小为：" << list1.GetSize() << endl;
//	list1.Print();
//	list1.Remove(7);
//	cout << "链表大小为：" << list1.GetSize() << endl;
//	list1.Print();
//	list1.Remove(6);
//	cout << "链表大小为：" << list1.GetSize() << endl;
//	list1.Print();
//	list1.Remove(4);
//	cout << "链表大小为：" << list1.GetSize() << endl;
//	list1.Print();
//	list1.Remove(3);
//	cout << "链表大小为：" << list1.GetSize() << endl;
//	list1.Print();
//	list1.Remove(2);
//	cout << "链表大小为：" << list1.GetSize() << endl;
//	list1.Print();
//}
//int main()
//{
//	Test();
//	return 0;
//}
//*/