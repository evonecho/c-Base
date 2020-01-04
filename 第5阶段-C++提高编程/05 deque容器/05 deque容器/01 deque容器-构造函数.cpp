#include<iostream>
using namespace std;
#include<deque>

//deque ���캯��

/*
deque:˫�����飬���Զ�ͷ�˽��в������

deque��vector������
vector����ͷ���Ĳ���ɾ��Ч�ʵͣ���������Խ��Ч��Խ��
deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vector��
vector����Ԫ��ʱ���ٶȻ��deque���п������죬��������ߵ��ڲ�ʵ���й�
*/

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;	//���˳��� �����ܵ����ݲ����޸���
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	cout << "��һ�ֹ���deque�ķ�ʽ��" << endl;
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	cout << "\n�ڶ��ֹ���deque�ķ�ʽ��" << endl;
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	cout << "\n�����ֹ���deque�ķ�ʽ��" << endl;
	deque<int> d3(10, 100); //10��100
	printDeque(d3);

	cout << "\n�����ֹ���deque�ķ�ʽ����������" << endl;
	deque<int> d4(d3);
	printDeque(d4);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
