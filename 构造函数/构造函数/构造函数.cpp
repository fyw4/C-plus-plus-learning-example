/*
//类内进行构造函数
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;
class Time
{
	public:
		Time();				//类内进行构造函数
		{
			hour = 0;
			minute = 0;
			sec =0;
		}
		void set_time();
		void show_time();
	private:
		int hour;
		int minute;
		int sec;
};

void Time::set_time()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}


void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec <<endl;
}

int main()
{
	Time t1;			//建立对象t1，同时调用构造函数t1.Time()
	t1.set_time();		//对t1的数据成员赋值
	t1.show_time();		//显示t1的数据成员的置
	Time t2;			//建立对象t2，同时调用构造函数t2.Time()
	t2.show_time();		//显示t2的数据成员的值
	system("pause");
	return 0;
}
*/

/*
//类外进行构造函数
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;
class Time
{
	public:
		Time();				//类外进行构造函数

		void set_time();
		void show_time();
	private:
		int hour;
		int minute;
		int sec;
};

void Time::set_time()
{
	cin >> hour;
	cin >> minute;
	cin >> sec;
}

Time::Time()
{
	hour = 0;
	minute = 0;
	sec =0;
}
void Time::show_time()
{
	cout << hour << ":" << minute << ":" << sec <<endl;
}

int main()
{
	Time t1;			//建立对象t1，同时调用构造函数t1.Time()
	t1.set_time();		//对t1的数据成员赋值
	t1.show_time();		//显示t1的数据成员的置
	Time t2;			//建立对象t2，同时调用构造函数t2.Time()
	t2.show_time();		//显示t2的数据成员的值
	system("pause");
	return 0;
}
*/

/*
//带参数的构造函数
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;

class Box
{
public:
	Box(int h, int w, int len);//声明带参数的构造函数
	int volume();		//声明计算体积的函数
private:
	int height;
	int width;
	int lenght;
};

Box::Box(int h, int w, int len)
{
	height = h;
	width = w;
	lenght = len;
}

int Box::volume()
{
	return(height*width*lenght);
}

int main()
{
	Box box1(12, 25, 30);	//建立对象box1，并指定box1长宽高的值
	cout << "The volume of box1 is " << box1.volume() << endl;
	Box box2(15, 30, 21);	//建立对象box2，并指定box2长宽高的值
	cout << "The voluem of box2 is " << box2.volume() << endl; 
	system("pause");
	return 0;
}
*/

/*
//构造函数的重载
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;

class Box
{
public:
	Box();
	Box(int h, int w, int len):height(h), width(w), length(len){}//声明带参数的构造函数
	//Box(int h, int w, int len);
	int volume();		//声明计算体积的函数
private:
	int height;
	int width;
	int length;
};

Box::Box()
{
	height = 10;
	width = 10;
	length = 10;
}

//Box::Box(int h, int w, int len)
//{
//	height = h;
//	width = w;
//	length = len;
//}

int Box::volume()
{
	return(height*width*length);
}

int main()
{
	Box box1;	//建立对象box1，不指定参数
	cout << "The volume of box1 is " << box1.volume() << endl;
	Box box2(15, 30, 21);	//建立对象box2，并指定box2长宽高的值
	cout << "The voluem of box2 is " << box2.volume() << endl; 

	system("pause");
	return 0;
}
*/

#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;
class Box
{
public:
	Box(int h = 10, int w = 10, int len = 10);//在声明构造函数时指定默认参数
	int volume();
private:
	int height;
	int width;
	int length;
};

Box::Box(int h ,int w, int len)	//在定义函数时可以不指定默认参数
{
	height = h;
	width = w;
	length = len;
}

int Box::volume()
{
	return(height*width*length);
}

int main()
{
	Box box1; //没有给实参
	cout << "The volume of box1 is " << box1.volume() << endl;
	Box box2(15); //只给定一个实参
	cout << "The volume of box2 is "<< box2.volume() << endl;
	Box box3(15, 30); //只给定2个实参
	cout << "The volume of box3 is " << box3.volume() << endl;
	Box box4(15, 30, 20);//只给定3个实参
	cout << "The volume of box4 is " << box4.volume() << endl;

	system("pause");
	return 0;
}