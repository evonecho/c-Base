#include<iostream>
using namespace std;
#include<string>

//������Ԫ

class Building
{
	//GoodGay���Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա
	friend class GoodGay;

public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

	string m_SittingRoom;//����

private:
	string m_BedRoom;//����

};

class GoodGay
{
public:
	GoodGay()
	{
		//�������������
		building = new Building();
	}

	void visit() //�ιۺ��� ����Building�е�����
	{
		cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;

		//��Ϊ��Building�м���friend class GoodGay;����GoodGay����Building��ĺ����ѣ����Է���Building���е�˽�г�Ա
		cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
	}

	Building * building;
};

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
