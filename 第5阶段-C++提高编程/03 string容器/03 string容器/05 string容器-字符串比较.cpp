#include<iostream>
using namespace std;
#include<string>

//�ַ����Ƚ�
void test01()
{
	string str1 = "htllo";
	string str2 = "hello";

	if (str1.compare(str2) == 0)	//�Ƚ�ÿһ���ַ���ASIIC��
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else
	{
		cout << "str1 С�� str2" << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}
