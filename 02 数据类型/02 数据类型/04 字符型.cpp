#include<iostream>
using namespace std;

int main() {
	//1���ַ��ͱ���������ʽ
	char ch = 'a';
	cout << "ch = " << ch << endl;

	//2��char �ַ��ͱ���ֻռ��1���ֽ�
	cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;

	//3���ַ��ͱ�����������
	//char ch2 = "d";	//�����ַ��ͱ�����ʱ��Ҫ�õ�����
	//char ch2 = 'abcdef'; //�����ַ��ͱ�����ʱ�򣬵�������ֻ����һ���ַ�

	/*
	4���ַ��ͱ�����ӦASCII����	�ַ��ͱ��������ǰ��ַ�����ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII������뵽�洢��Ԫ
	a - 97
	A - 65

	*/
	cout << "int(ch) = " << (int)ch << endl;

	system("pause");
	return 0;
}