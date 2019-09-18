#include<iostream>
using namespace std;
#include<string>
#include<ctime>

struct Student
{
	string name;
	int score;
};

struct Teacher
{
	string name;
	struct Student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct  Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 3; i++)
	{
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSeed[j];

			int random = rand() % 60 + 40; //rand() % 60��0~59��	�ټӸ�40����Χ���ǡ�40~99��
			tArray[i].sArray[j].score = random;
		}
	}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].name << " ���Է�����" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1������3����ʦ������
	struct Teacher tArray[3];

	//2��ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3����ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;

}