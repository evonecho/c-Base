#include<iostream>
using namespace std;

//��������

//1��ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "mySwap01 a = " << a << endl;
	cout << "mySwap01 b = " << b << endl;
}

//2����ַ����
void mySwap02(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//03�����ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	//mySwap01(a, b);	//ֵ���ݣ��ββ�������ʵ��

	//mySwap02(&a, &b);	//��ַ���ݣ��β�����ʵ��

	mySwap03(a, b);	//���ô��ݣ��βλ�����ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;	

	system("pause");
	return 0;
}
