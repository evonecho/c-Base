#include<iostream>
using namespace std;

//1��new�Ļ����﷨
int * func()
{
	//�ڶ���������������
	//new���ص��� ���������͵�ָ��
	int * p = new int(10);
	return p;
}

void test01()
{
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	/*
	���������� �ɳ���Ա�����٣�����Ա�����ͷ�
	������ͷŶ��������ݣ����ùؼ���delete
	*/
	//delete p;
	//cout << *p << endl; //�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}

//2���ڶ�������new��������
int * test02()
{
	//����10�������ݣ��ڶ���
	int * arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100; //��10��Ԫ�ظ�ֵ	100~109
	}
	/*
	�ͷŶ�������
	�ͷ������ʱ��Ҫ��[]�ſ���
	*/
	//delete[] arr; //�ڴ��Ѿ����ͷţ�main�ٴη��ʾ��ǷǷ��������ᱨ��
	return arr;
}

int main()
{
	//test01();
	int * arr = test02();
	cout << "��1��ȡ���������飺" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "��2��ȡ���������飺" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
