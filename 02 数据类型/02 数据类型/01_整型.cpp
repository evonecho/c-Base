#include<iostream>
using namespace std;

int main() {
	//1�������� 2�ֽ�	-2��15�η�~(2��15�η�)-1	-32768~32767
	short num1 = -32770;

	//2������ 4�ֽ�
	int num2 = 10;

	//3�������� windowsΪ4�ֽڣ�linuxΪ4�ֽڣ�32λ����8�ֽڣ�64λ
	long num3 = 10;

	//4���������� 8�ֽ�
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");
	return 0;
}
