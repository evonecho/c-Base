#include<iostream>
using namespace std;

/*
����Ȩ�ޣ�����
����Ȩ�� public		��Ա ���ڿ��Է��� ������Է���
����Ȩ�� protected	��Ա ���ڿ��Է��� ���ⲻ���Է���	���ӿ��Է��ʸ����еı�������
˽��Ȩ�� private	��Ա ���ڿ��Է��� ���ⲻ���Է���	���Ӳ����Է��ʸ��׵�˽������
*/

class Person
{
public:
	string m_Name;
	
protected:
	string m_Car;

private:
	int m_Password;

	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}

};

int main()
{
	Person p1;
	p1.m_Name = "��С��";
	//p1.m_Car = "����";		//����Ȩ�����ݣ���������ʲ���
	//p1.m_Password = 123;	//˽��Ȩ�����ݣ���������ʲ���

	system("pause");
	return 0;
}
