#include<iostream>
using namespace std;
#include "swap.h"

/*
�����ķ��ļ���д
ʵ���������ֽ��н����ĺ���
*/

//����������
//void swap(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);

	system("pause");
	return 0;
}

//�����Ķ���
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

/*
1������.h��׺����ͷ�ļ�(swap.h)
2������.cpp��׺����Դ�ļ�(swap.cpp)
3����ͷ�ļ���д����������
4����Դ�ļ���д�����Ķ���
*/