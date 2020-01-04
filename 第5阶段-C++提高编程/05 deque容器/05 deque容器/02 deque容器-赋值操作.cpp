#include<iostream>
using namespace std;
#include<deque>

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque������ֵ����
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	cout << "��һ�ָ�ֵ��ʽ��" << endl;
	printDeque(d1);

	//operator= ��ֵ
	deque<int> d2;
	d2 = d1;
	cout << "\n�ڶ��ָ�ֵ��ʽ��operator=" << endl;
	printDeque(d2);

	//assign��ֵ
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	cout << "\n�����ָ�ֵ��ʽ��assign��ֵ" << endl;
	printDeque(d3);

	deque<int> d4;
	d4.assign(10, 100);	//10��100
	cout << "\n�����ָ�ֵ��ʽ��" << endl;
	printDeque(d4);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
