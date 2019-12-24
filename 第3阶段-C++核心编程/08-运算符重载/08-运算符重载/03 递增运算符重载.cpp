#include<iostream>
using namespace std;

//���ص��������

//�Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myInt);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++�����������������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++()
	{
		//�Ƚ���++����
		m_Num++;

		//�ٽ�����������
		return *this;
	}

	//���غ���++�����
	//void operator++(int) int����ռλ������������������ǰ�úͺ��õ���
	//���ò��ܷ������ã���Ϊ���ص�temp�Ǿֲ���������������ͷ���
	MyInteger operator++(int)
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;

		//�� ����
		m_Num++;

		//��󽫼�¼�������
		return temp;
	}

private:
	int m_Num;
};

//����<<�����
ostream& operator<<(ostream& cout, MyInteger myInt)
{
	cout << myInt.m_Num;
	return cout;
}

void test01()
{
	MyInteger myInt;
	cout << ++(++myInt) << endl;
	cout << myInt << endl;//MyInteger& operator++() ������Ƿ��ص�����&��myInt�Ͳ����������
}

void test02()
{
	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
