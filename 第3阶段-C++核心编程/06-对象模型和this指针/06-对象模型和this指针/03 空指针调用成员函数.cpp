#include<iostream>
using namespace std;

//��ָ����ó�Ա����

class Person
{
public:
	void showClassName()
	{
		//��ָ��Ҳ���Է���
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//��ָ����ʱ����ԭ������Ϊ�����ָ��ΪNULL
		if (this == NULL) //Ԥ�������ָ�룬���ӳ���Ľ�׳��
		{
			return;
		}

		cout << "age = " << m_Age << endl;
	}

	int m_Age;

};

void test01()
{
	Person * p = NULL;
	p->showClassName();
	//p->showPersonAge();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
