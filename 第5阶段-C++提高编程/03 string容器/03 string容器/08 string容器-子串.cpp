#include<iostream>
using namespace std;
#include<string>

//string�Ӵ�
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";
	//���ʼ���ַ�� ��ȡ �û�����Ϣ
	int pos = email.find("@");
	cout << "pos:" << pos << endl;

	string userName = email.substr(0, pos);
	cout << "userName:" << userName << endl;
}

int main()
{
	//test01();

	test02();

	system("pause");
	return 0;
}
