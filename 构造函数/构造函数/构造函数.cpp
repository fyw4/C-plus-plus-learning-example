/*
//���ڽ��й��캯��
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;
class Time
{
	public:
		Time();				//���ڽ��й��캯��
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
	Time t1;			//��������t1��ͬʱ���ù��캯��t1.Time()
	t1.set_time();		//��t1�����ݳ�Ա��ֵ
	t1.show_time();		//��ʾt1�����ݳ�Ա����
	Time t2;			//��������t2��ͬʱ���ù��캯��t2.Time()
	t2.show_time();		//��ʾt2�����ݳ�Ա��ֵ
	system("pause");
	return 0;
}
*/

/*
//������й��캯��
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;
class Time
{
	public:
		Time();				//������й��캯��

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
	Time t1;			//��������t1��ͬʱ���ù��캯��t1.Time()
	t1.set_time();		//��t1�����ݳ�Ա��ֵ
	t1.show_time();		//��ʾt1�����ݳ�Ա����
	Time t2;			//��������t2��ͬʱ���ù��캯��t2.Time()
	t2.show_time();		//��ʾt2�����ݳ�Ա��ֵ
	system("pause");
	return 0;
}
*/

/*
//�������Ĺ��캯��
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;

class Box
{
public:
	Box(int h, int w, int len);//�����������Ĺ��캯��
	int volume();		//������������ĺ���
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
	Box box1(12, 25, 30);	//��������box1����ָ��box1����ߵ�ֵ
	cout << "The volume of box1 is " << box1.volume() << endl;
	Box box2(15, 30, 21);	//��������box2����ָ��box2����ߵ�ֵ
	cout << "The voluem of box2 is " << box2.volume() << endl; 
	system("pause");
	return 0;
}
*/

/*
//���캯��������
#include"StdAfx.h"
#include<iostream>
#include<windows.h>
using namespace std;

class Box
{
public:
	Box();
	Box(int h, int w, int len):height(h), width(w), length(len){}//�����������Ĺ��캯��
	//Box(int h, int w, int len);
	int volume();		//������������ĺ���
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
	Box box1;	//��������box1����ָ������
	cout << "The volume of box1 is " << box1.volume() << endl;
	Box box2(15, 30, 21);	//��������box2����ָ��box2����ߵ�ֵ
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
	Box(int h = 10, int w = 10, int len = 10);//���������캯��ʱָ��Ĭ�ϲ���
	int volume();
private:
	int height;
	int width;
	int length;
};

Box::Box(int h ,int w, int len)	//�ڶ��庯��ʱ���Բ�ָ��Ĭ�ϲ���
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
	Box box1; //û�и�ʵ��
	cout << "The volume of box1 is " << box1.volume() << endl;
	Box box2(15); //ֻ����һ��ʵ��
	cout << "The volume of box2 is "<< box2.volume() << endl;
	Box box3(15, 30); //ֻ����2��ʵ��
	cout << "The volume of box3 is " << box3.volume() << endl;
	Box box4(15, 30, 20);//ֻ����3��ʵ��
	cout << "The volume of box4 is " << box4.volume() << endl;

	system("pause");
	return 0;
}