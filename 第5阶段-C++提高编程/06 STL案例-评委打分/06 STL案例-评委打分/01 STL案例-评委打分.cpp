#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<string>
#include<algorithm>
#include<ctime>

/*
����
��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����
*/

//ѡ����
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score; //ƽ����
};

void printVector(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "������" << (*it).m_Name << " ������" << (*it).m_Score << endl;
		cout << "������" << it->m_Name << " ������" << it->m_Score << endl;
	}
}

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//��������person������뵽������
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ������뵽deque������
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //60~100
			d.push_back(score);
		}

		//����
		sort(d.begin(), d.end());

		//ȥ����ߺ���ͷ�
		d.pop_front();
		d.pop_back();

		//ȡƽ����
		int sum = 0;
		cout << "ѡ�֣�" << it->m_Name << " ��֣�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
			sum += *dit; //�ۼ�ÿ����ί�ķ���
		}
		cout << endl;

		int avg = sum / d.size();

		//��ƽ���ָ�ֵ��ѡ������
		it->m_Score = avg;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL)); //���������仰��ÿ�����еõ������������һ����

	cout << "1������5��ѡ��=>" << endl;
	vector<Person> v;
	createPerson(v);
	printVector(v);

	cout << "\n2����5��ѡ�ִ��=>" << endl;
	setScore(v);

	cout << "\n3����ʾ���÷�=>" << endl;
	printVector(v);

	system("pause");
	return 0;
}
