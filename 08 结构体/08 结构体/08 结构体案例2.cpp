using namespace std;
#include<string>

/*
����
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
*/

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (heroArray[j].age < heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}

		}
	}
}

int main()
{
	struct Hero heroArray[5] =
	{
		{ "����", 24, "��" },
		{ "����", 18, "Ů" },
		{ "����", 16, "��" },
		{ "����", 25, "Ů" },
		{ "��һ", 23, "��" }
	};

	//����������
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubbleSort(heroArray, len);

	//��ӡ����������
	//...��...

	system("pause");
	return 0;
}
