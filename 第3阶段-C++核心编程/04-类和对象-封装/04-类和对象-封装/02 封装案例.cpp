#include<iostream>
using namespace std;
#include<string>

//���һ��ѧ����
class Student
{
public:

	/*
	���е����Ժ���Ϊ ����ͨ���Գ�Ϊ ��Ա
	����	��Ա���� ��Ա����
	��Ϊ	��Ա���� ��Ա����
	*/

	string m_Name;
	int m_Id;

	void showStudent()
	{
		cout << "������" << m_Name << " ѧ�ţ�" << m_Id << "" << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}
};

int main()
{
	Student s1;
	s1.m_Name = "����";
	s1.m_Id = 1;
	s1.showStudent();

	Student s2;
	s2.setName("����");
	s2.showStudent();

	system("pause");
	return 0;
}
