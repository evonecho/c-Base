#include<iostream>
using namespace std;
#include<string>

//��������
class Building
{
	//goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building��˽�г�Ա
	friend void goodGay(Building *building);

public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����
};

//ȫ�ֺ���
void goodGay(Building *building)
{
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	//Building���������friend void goodGay(Building *building);���Կ��Է���Building��˽�г�Աm_BedRoom
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
