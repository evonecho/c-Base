#include<iostream>
using namespace std;

/*
�������أ������ú�������ͬ����߸�����

�������ص�����������
1����ͬһ����������
2������������ͬ
3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
*/
void func()
{
	cout << "func�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}

/*
ע�����
�����ķ���ֵ��������Ϊ�������ص�����
*/
//int func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//	return 5;
//}

int main()
{
	func();
	func(10);

	system("pause");
	return 0;
}
