#include<iostream>
using namespace std;

/*
�������ص�ע�����
1��������Ϊ���ص�����
*/
void fun(int &a)	//int &a = 10;���Ϸ�
{
	cout << "func(int &a)���á�a=" << a << endl;
}

void fun(const int &a)	//const int &a = 10;�Ϸ�
{
	cout << "func(const int &a)���á�a=" << a << endl;
}

//2��������������Ĭ�ϲ���
void func2(int a, int b = 40)
{
	cout << "fun2(int a)�ĵ���" << endl;
}
void func2(int a)
{
	cout << "fun2(int a)�ĵ���" << endl;
}

int main()
{
	int a = 10;
	fun(a);

	fun(20);//���볣��20

	const int b = 15;
	fun(b);

	//func2(30);//��������������Ĭ�ϲ��������ֶ����ԣ��������������������

	system("pause");
	return 0;
}
