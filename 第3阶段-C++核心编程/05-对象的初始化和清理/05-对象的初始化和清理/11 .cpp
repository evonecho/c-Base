#include<iostream>
using namespace std;

//��Ա���� �� ��Ա���� �Ƿֿ��洢��

class Person
{
	
};

class Person2
{
	int m_A; //�Ǿ�̬��Ա����
};

class Person3
{
	int m_A; //�Ǿ�̬��Ա���� ������Ķ�����

	static int m_B; //��̬��Ա���� �������������

	void func() {} //�Ǿ�̬��Ա���� �������������

	static void func2() {}	//��̬��Ա���� ��������Ķ�����
};
int Person3::m_B = 0;

void test01()
{
	Person p;

	/*
	�ն���ռ���ڴ�ռ�Ϊ��1���ֽ�
	c++���������ÿ���ռ����Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ�á�
	ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	*/
	cout << "size of p = " << sizeof(p) << endl;

	Person2 p2;
	/*
	4���ֽ�
	*/
	cout << "size of p2 = " << sizeof(p2) << endl;

	//4���ֽڣ��൱�ڼ��˾�̬��Ա�������Ǿ�̬��Ա��������̬��Ա������û��������ռ�õ��ڴ�ռ䡣
	Person3 p3;
	cout << "size of p3 = " << sizeof(p3) << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
