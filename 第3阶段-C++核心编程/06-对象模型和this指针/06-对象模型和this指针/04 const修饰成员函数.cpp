#include<iostream>
using namespace std;

/*
��������
��Ա������const�����ǳ��������Ϊ������
�������ڲ������޸ĳ�Ա����
��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

������
��������ǰ��const�Ƹö���Ϊ������
������ֻ�ܵ��ó�����
*/

class Person
{
public:

	/*
	thisָ��ı��ʣ���ָ�볣����ָ���ָ���ǲ������޸ĵ�
	Person * const this; thisָ����ָ�볣�����������޸�ָ���ָ�򣬿����޸�ָ���ֵ
	�����Ҫthisָ���ֵҲ�����޸ģ�����ǰ��Ҳ�Ӹ�const����const Person * const this;
	�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	*/
	void showPerson() const
	{
		//this->m_A = 100;
		//this = NULL;//thisָ�벻�����޸�ָ���ָ��

		this->m_B = 100;
	}

	void func()
	{
		m_A = 200;
	}

	int m_A;
	mutable int m_B; //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable
};

void test01()
{
	Person p;
	p.showPerson();
	p.m_A = 30;
	p.m_B = 60;
}

//������
void test02()
{
	const Person p; //�ڶ���ǰ��const����Ϊ������
	//p.m_A = 30; //����
	p.m_B = 50;//m_B������ֵ���ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func(); //���󡣳����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}

int main()
{
	

	system("pause");
	return 0;
}
