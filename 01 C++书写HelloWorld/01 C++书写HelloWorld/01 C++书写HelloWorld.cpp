#include<iostream>
using namespace std;

//����ע��
/* 
����ע��
*/

//1��#define �곣��
#define Day 7

/*
	main��һ����������
	ÿ�����򶼱�������ôһ������
	���ҽ���һ��
*/
int main()
{
	//����Ļ�����hello C++
	cout << "hello C++" << endl;

	int a = 10;
	cout << "a = " << a << endl;

	//Day = 14; //����Day�ǳ�����һ���޸ľͻᱨ��
	cout << "һ���ܹ��У�" << Day << " ��" << endl;

	//2��const���εı���
	const int month = 12;
	//month = 16; //����const���εı���Ҳ��Ϊ����
	cout << "һ���ܹ���" << month << " ����" << endl;

	system("pause");
	return 0;
}
