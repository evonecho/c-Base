#include<iostream>
using namespace std;

int main() {
	/*
	float 4�ֽ�		��Ч���ַ�Χ��7λ��Ч����
	double 8�ֽ�	��Ч���ַ�Χ��15~16λ��Ч����
	Ĭ������� ���һ��С��������ʾ��6λ��Ч����
	*/

	float f1 = 3.14159f;
	cout << "f1 = " << f1 << endl;

	double d1 = 3.14159;
	cout << "d1 = " << d1 << endl;

	double dd = 100;
	double ddd = 3;
	cout << dd / ddd << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;
	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(double) << endl;

	//��ѧ��������һ��Ƚ����ã�
	float f2 = 3e2; //3 * 10^2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3 * 0.1^2
	cout << "f3 = " << f3 << endl;

	system("pause");
	return 0;
}