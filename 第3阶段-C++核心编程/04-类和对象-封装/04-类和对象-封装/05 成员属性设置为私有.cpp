#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}

private:
	string m_Name;
	int m_Age;
	string m_Lover;
};

int main()
{
	Person p;
	p.setName("����");
	cout << "������" << p.getName() << endl;

	system("pause");
	return 0;
}
