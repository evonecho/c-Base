#include<iostream>
using namespace std;
#include<deque>

//deque���������ݴ�ȡ

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	cout << "ͨ��[]��ʽ����Ԫ��" << endl;
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;

	cout << "\nͨ��at��ʽ����Ԫ��" << endl;
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "\n��һ��Ԫ��Ϊ��" << d.front() << endl;
	cout << "\n���һ��Ԫ��Ϊ��" << d.back() << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}
