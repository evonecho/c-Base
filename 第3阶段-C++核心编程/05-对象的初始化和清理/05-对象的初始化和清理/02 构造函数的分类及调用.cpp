#include<iostream>
using namespace std;

/*
���캯���ķ��༰����
���ࣺ
	���ղ������ࣺ�޲ι��졢�вι���
	�������ͷ��ࣺ��ͨ���졢��������
*/

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a)
	{
		cout << "Person���вι��캯������" << endl;
		age = a;
	}
	//�������캯��
	Person(const Person &p)
	{
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "Persion�Ŀ������캯������" << endl;
	}
	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int age;
};

//����
void test01()
{
	//1�����ŷ������ã�
	cout << "���ŷ���" << endl;
	Person p1;	//Ĭ�Ϲ��캯������
	Person p2(10);
	Person p3(p2);	//�������캯��

	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;

	/*
	ע������1��
	����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
	��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
	*/
	//Person p1();	//���������� void func();

	//2����ʾ��
	cout << "\n��ʾ����" << endl;
	Person p5;
	Person p6 = Person(15);	//�вι���
	Person p7 = Person(p6); //��������

	Person(13);	//���������ص㣺��ǰִ�н�����ϵͳ���������յ�������������������
	cout << "Person(13);ִ�����ϵͳ�������յ���������" << endl;

	/*
	ע������2��
	��Ҫ���ÿ������캯�� ��ʼ���������󡣱���������ΪPerson(p7) == Person p7; p3ǰ���Ѿ�����
	*/
	//Person(p7);

	//3����ʽת����
	Person p10 = 26;	//�൱��д�� Person p10 = Person(26);	//�вι���
	Person p11 = p10;	//�������� Person p11 = Person(p10);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
