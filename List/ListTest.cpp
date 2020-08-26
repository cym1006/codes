#include<iostream>
#include<cstdlib>
#include<ctime>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
	list<int>arr;
	for (int i = 0; i < 100; ++i)
	{
		arr.push_back(rand() % 100);
	}
	list<int>::iterator it = arr.begin();
	while(it!=arr.end())
	{
		if (*it % 5 == 0)
		{
			arr.erase(it++);
		}
		cout << *it << " ";
		it++;
	}
	return 0;
}
