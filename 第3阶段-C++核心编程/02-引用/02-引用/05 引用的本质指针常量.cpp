#include<iostream>
using namespace std;

/*
���õı��ʣ�����һ����ָ�볣��
����һ����ʼ���󣬾Ͳ����Է����ı䣨Ӧ������˵���õĵط������Է����ı䣩
*/
int main()
{
	int a = 10;

	//�Զ�ת��Ϊ int* const ref = &a��ָ�볣����ָָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20;	//�ڲ�����ref�����ã����Զ�������ת��Ϊ��*ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	system("pause");
	return 0;
}
