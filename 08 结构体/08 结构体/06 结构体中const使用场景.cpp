#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const student * s)
{
	//s->age = 40;	//����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}

int main()
{
	struct student s = { "����", 15, 70 };
	printStudent(&s);
	
	system("pause");
	return 0;
}
