#include<iostream>
using namespace std;
#include<deque>

/*
deque������С������
��vector������һ���ĵط���dequeû�������ĸ����Ϊ�����ڲ��ṹ�У�û�����������ƣ�������ǰ�����޵Ŀ�ͨ
*/

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
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	
	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
		//deque����û�������ĸ���
	}

	//����ָ����С
	d1.resize(15);
	printDeque(d1);		//Ĭ����0���
	d1.resize(20, 1);	//��1���
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);

}

int main()
{
	test01();

	system("pause");
	return 0;
}
