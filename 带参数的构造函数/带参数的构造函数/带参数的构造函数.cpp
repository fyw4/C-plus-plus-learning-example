#include "stdafx.h"
#include<iostream>
#include<windows.h>

using namespace std;

class Box
{
	public:
		Box(int, int, int);
		int volume();
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
	return (height * width * lenght);
}
int main()
{
	Box box1(12, 25, 30);
	cout << "The volume of box1 is\t" << box1.volume() << endl;
	Box box2(15, 30, 21);
	cout << "The volume of box2 is\t" << box2.volume() << endl;
	system("pause");
	return 0;
}

