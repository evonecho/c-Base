#include<iostream>
using namespace std;
#include<string>

/*
1������ѧ����������
�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
*/
struct student
{
	//��Ա�б�

	string name;
	int age;
	int score;
}s3; //˳�㴴���ṹ�����

//2��ͨ��ѧ�����ʹ�������ѧ��
int main()
{
	//2.1 struct Student s1
	//struct Student s1; //struct�ؼ��ֿ���ʡ��
	student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << " ����" << s1.age << " ������" << s1.score << endl;

	//2.2 struct Student s2 = {...}
	struct student s2 = {"����", 25, 80};
	cout << "������" << s2.name << " ����" << s2.age << " ������" << s2.score << endl;

	//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�������һ�㲻���������ַ�ʽ��
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name 
		 << " ����" << s3.age 
		 << " ������" << s3.score << endl;

	system("pause");
	return 0;
}
