#include<iostream>
using namespace std;
#include<string>

//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int scoure;
};

//��ӡѧ����Ϣ�ĺ���
void printStudent1(struct  student s)
{
	s.name = "����";
	cout << "printStudent1�д�ӡ ������" << s.name << " ���䣺" << s.age << " ������" << s.scoure << endl;
}

void printStudent2(struct student * p)
{
	p->scoure = 90;
	cout << "printStudent2�д�ӡ ������" << p->name << " ���䣺" << p->age << " ������" << p->scoure << endl;
}

int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 20;
	s.scoure = 85;

	printStudent1(s);
	printStudent2(&s);
	cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " ������" << s.scoure << endl;

	system("pause");
	return 0;
}
