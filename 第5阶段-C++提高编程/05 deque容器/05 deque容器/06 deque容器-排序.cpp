#include<iostream>
using namespace std;
#include<deque>
#include<algorithm> //��׼�㷨ͷ�ļ�

//deque��������

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

	cout << "����d=>" << endl;
	printDeque(d);

	cout << "\n����Ĭ��������򣺴�С���� ����=>" << endl;
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ��������sort��������
	sort(d.begin(), d.end());
	printDeque(d);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
