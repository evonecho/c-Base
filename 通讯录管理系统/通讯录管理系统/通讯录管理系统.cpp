/*
��װ������ʾ�ý���
*/
#include<iostream>
using namespace std;
#include<string>

#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	string m_Name;
	int m_Sex;//1 ��	2 Ů
	int m_Age;
	string m_Phone;
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX];
	
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};

//1�������ϵ��
void addPerson(Addressbooks * abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else
	{
		//��Ӿ�����ϵ��
		
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		int sex = 0;
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age > 0 && age << 150)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}

		//�绰
		string phone;
		cout << "������绰" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause"); //�밴���������
		system("cls"); //��������
	}
}

//�˵�����
void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0; //�����û�ѡ������ı���

	while (true) {
		//�˵�����
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:	//1�������ϵ��
			cout << "�����ϵ����Ŷ" << endl;
			addPerson(&abs);//���õ�ַ���ݣ������޸�ʵ��
			break;
		case 2: //2����ʾ��ϵ��
			break;
		case 3: //3��ɾ����ϵ��
			break;
		case 4: //4��������ϵ��
			break;
		case 5: //5���޸���ϵ��
			break;
		case 6: //6�������ϵ��
			break;
		case 0: //0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}
