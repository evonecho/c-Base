#include<iostream>
using namespace std;

void swap1(int *p1, int *p2);

int main()
{
	int a = 10;
	int b = 20;

	int* p1 = &a;
	int* p2 = &b;

	cout << "ָ�뽻��ǰ��a = " << a << endl;
	cout << "ָ�뽻��ǰ��b = " << b << endl;

	swap1(&a, &b);

	cout << "ָ�뽻����a = " << a << endl;
	cout << "ָ�뽻����b = " << b << endl;

	system("pause");
	return 0;
}

void swap1(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}