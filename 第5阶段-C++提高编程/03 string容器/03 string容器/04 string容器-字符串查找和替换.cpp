#include<iostream>
using namespace std;
#include<string>

//�ַ������Һ��滻

//1������
void test01()
{
	string str1 = "abcdefgbc";
	int pos = str1.find("bc");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����pos = " << pos << endl;
	}
	
	/*
	rfind��find������
	rfind����������ң�find�������Ҳ���
	*/
	//rfind
	pos = str1.rfind("bc");
	cout << "pos = " << pos << endl;
}

//2���滻
void test02()
{
	string str1 = "abcdefg";
	//bcd�滻Ϊ1111
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
