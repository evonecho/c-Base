#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	cout << "����[]��ʽ���������е�Ԫ��====>" << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << "\n����at��ʽ����Ԫ��====>" << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "\n��ȡ��һ��Ԫ��Ϊ��" << v1.front() << endl;

	cout << "\n��ȡ���һ��Ԫ��Ϊ��" << v1.back() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
