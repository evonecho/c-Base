#include<iostream>
using namespace std;

//栈区数据注意事项	--- 不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int* func(int b) //形参数据也会放在栈区
{
	int a = 10; //局部变量。存放在栈区，栈区的数据在函数执行完后自动释放
	
	cout << "函数里面的地址：" << &a << ", 数据值：" << a << endl;
	cout << "函数里面的地址：" << &a << ", 数据值：" << a << endl;

	return &a; //返回局部变量的地址
}

int main()
{
	//接受func函数的返回值
	int * p = func(1);

	cout << "函数外面的地址 第1次：" << p << "，数据值：" << *p << endl; //第一次可以打印正确的数字，是因为编译器做了保留
	cout << "函数外面的地址 第2次：" << p << "，数据值：" << *p << endl; //第二次这个数据就不再保留了
	cout << "函数外面的地址 第3次：" << p << "，数据值：" << *p << endl;

	system("pause");
	return 0;
}
