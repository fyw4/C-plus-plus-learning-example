#include "stdafx.h"
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

class Time
{
public:
	Time(int, int, int);
	int hour;
	int minute;
	int sec;
	void get_time();
};

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}

void Time::get_time()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}

int main()
{
	Time t1(10, 13, 56);
	int *p1 = &t1.hour;	//输出p1所指的数据成员t1.hour
	cout << *p1 << endl;
	t1.get_time();

	Time *p2 = &t1;		//定义指向Time类对象的指针变量p2，并使p2指向t1
	p2->get_time();

	void(Time::*p3)();	//定义指向Time类公用成员函数的指针p3
	p3 = &Time::get_time;
	(t1.*p3)();

	system("pause");
	return 0;
}

