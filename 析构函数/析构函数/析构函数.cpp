
#include "stdafx.h"
#include<string>
#include<iostream>

using namespace std;

class Student
{
public:
	Student(int n, string nam, char s)
	{
		num = n;
		name = nam;
		sex = s;
		cout << "Constructor called." << endl;
	}
	~Student()
	{
		cout << "Destructot called" << endl;
	}
	void dispaly()
	{
		cout << "num: " << num << endl;
		cout << "name: " << name << endl;
		cout << "sex: " << sex << endl << endl;
	}
private:
	int num;
	string name;
	char sex;

};

int main()
{
	Student stud1(10010, "Wang_li", 'f');
	stud1.dispaly();
	Student stud2(10011, "Zhang_fun", 'm');
	stud2.dispaly();

	//system("pause");
	return 0;
}
