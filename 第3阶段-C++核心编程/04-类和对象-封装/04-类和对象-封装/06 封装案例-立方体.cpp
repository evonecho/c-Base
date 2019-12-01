#include<iostream>
using namespace std;

/*
��������ƣ�
�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
*/
class Cube
{
private:
	int m_L; //��
	int m_W; //��
	int m_H; //��
public:
	void setL(int l)
	{
		m_L = l;
	}

	int getL()
	{
		return m_L;
	}

	void setW(int w)
	{
		m_W = w;
	}

	int getW()
	{
		return m_W;
	}

	void setH(int h)
	{
		m_H = h;
	}

	int getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			cout << "��Ա�����жϣ�c1��c2���" << endl;
			return true;
		}
		else
		{
			cout << "��Ա�����жϣ�c1��c2�����" << endl;
			return false;
		}
	}

};

//����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(20);
	c1.setH(30);
	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
	cout << "c1�����Ϊ��" << c1.calculateV() << endl;

	Cube c2;
	c1.setL(10);
	c1.setW(20);
	c1.setH(40);
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "ȫ�ֺ����жϣ�c1��c2���" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����жϣ�c1��c2�����" << endl;
	}

	c1.isSameByClass(c2);

	system("pause");
	return 0;
}
