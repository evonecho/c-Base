#include<iostream>
using namespace std;

//�������Ϊ���Ա

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯��" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone����������" << endl;
	}

	string m_PName;
};

class Person
{
public:
	Person(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		cout << "Person�Ĺ��캯��" << endl;
	}
	~Person()
	{
		cout << "Person����������" << endl;
	}

	string m_Name;
	Phone m_Phone;
};

/*
�������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������
������˳���빹���෴
*/

void test01()
{
	Person p("����", "vivo x20");
}

int main()
{
	test01();

	system("pause");
	return 0;
}
