#include<iostream>
using namespace std;

/*
����Ĭ�ϲ���
��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
�﷨������ֵ���� ���������β� = Ĭ��ֵ�� {}
*/
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

/*
ע��ʵ�֣�
���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�������Ĭ��ֵ
*/
//int func2(int a, int b = 10, int c, int d = 20)
//{
//	return a + b + c;
//}

/*
2���������������Ĭ�Ϻ���������ʵ�־Ͳ�����Ĭ�Ϻ���
������ʵ��ֻ����һ����Ĭ�ϲ���
*/
int func3(int a, int b = 10);

int func3(int a, int b)
{
	return a + b;
}

int main()
{
	cout << func(10, 30) << endl;

	cout << func3(10) << endl;

	system("pause");
	return 0;
}
