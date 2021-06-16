#include<iostream>
#include"Point.h"
using namespace std;

Point::Point(){
	x = y = 0;
	cout << "Default Constructor called." << endl;
}

Point::Point(int x, int y):x(x),y(y){
	cout << "Constructor called." << endl;
}

Point::~Point(){
	cout << "Destructor called." << endl;
}

void Point::move(int newX, int newY){
	cout << "Moving the Point to("<<newX<<", "<< newY <<")" << endl;
}