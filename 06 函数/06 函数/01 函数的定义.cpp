#include<iostream>
using namespace std;

/*
�����Ķ��壺
�﷨��
����ֵ���� ������(�����б�) { ��������� return���ʽ }
*/
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main() 
{
	int c = add(3, 5);
	cout << c << endl;

	system("pause");
	return 0;
}
