#include<iostream>
using namespace std;

int main()
{
	/*
	ָ�������
	����ָ����������е�Ԫ��
	*/

	int arr[5] = {1, 2, 3, 4, 5};
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << " " << endl;

	int* p = arr;//arr���������׵�ַ
	cout << "����ָ����ʵ�һ��Ԫ�أ�" << *p << endl;

	p++;//��ָ�����ƫ��4���ֽ�
	cout << "����ָ����ʵڶ���Ԫ�أ�" << *p << endl;

	int* p2 = arr;
	cout << "����ָ���������" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "�����" << i << "��Ԫ�أ�" << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}
