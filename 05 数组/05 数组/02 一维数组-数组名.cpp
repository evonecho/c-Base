#include<iostream>
using namespace std;

int main() {

	//��������;
	//1������ͨ��������ͳ����������ռ���ڴ��С
	int arr[3] = {1, 2, 3};
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2������ͨ���������鿴�����׵�ַ
	cout << "�����յ�ַΪ��" << arr << " " << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << &arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << &arr[1] << endl;

	//�������ǳ����������Խ��и�ֵ����
	//arr = 100;

	system("pause");
	return 0;
}