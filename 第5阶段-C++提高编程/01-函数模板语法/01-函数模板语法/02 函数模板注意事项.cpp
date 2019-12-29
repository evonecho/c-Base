#include<iostream>
using namespace std;

/*
����ģ��ע������
1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
*/

//template<typename T>	//typename�����滻��class
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

//1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
void test01()
{
	int a = 10;
	int b = 20;

	mySwap(a, b);	//��ȷ

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	char c = 'c';
	//mySwap(a, c);	//�����Ƶ�����һ�µ�T����
}

//2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "\nfunc ����" << endl;
}

void test02()
{
	func<int>();
}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}
