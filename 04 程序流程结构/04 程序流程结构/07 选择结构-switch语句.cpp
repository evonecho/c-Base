#include<iostream>
using namespace std;
#include<ctime>	//timeϵͳʱ��ͷ�ļ�����

int main() {
	cout << "�����Ӱ��֣�" << endl;

	int score = 0;
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "����Ϊ��10�ֵ�Ӱ" << endl;
		break;
	case 9:
		cout << "����Ϊ��9�ֵ�Ӱ" << endl;
		break;
	default:
		cout << "����Ϊ������Ƭ" << endl;
	}

	/*
	if��switch����
	switchȱ�㣺�жϵ�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
	switch�ŵ㣺�ṹ������ִ��Ч�ʸ�

	*/


	//������������ ���õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	int va1 = rand();
	cout << "�����������" << va1 << endl;

	system("pause");
	return 0;
}
