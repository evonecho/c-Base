#include<iostream>
using namespace std;

class C1
{
	int m_A;	//Ĭ��Ȩ�ޣ�˽��
};

struct C2
{
	int m_A;	//Ĭ��Ȩ�ޣ�����
};

int main()
{
	C1 c1;
	//c1.m_A;	//classĬ�ϵ�Ȩ��Ϊ��˽�У����Է��ʲ���

	C2 c2;
	c2.m_A = 100;	//��structĬ�ϵ�Ȩ��Ϊ�����������Կ��Է���

	system("pause");
	return 0;
}
