#include<iostream>
#include"arry.h"

using namespace std;

Point::Point(){
    x = y = 0;
    cout<<"Default Constructor called"<<endl;
}

Point::Point(int x, int y):x(x), y(y){
    cout<<"Constructor called"<<endl;
}

Point::~Point(){
    cout<<"Destructor called"<<endl;
}

void Point::move(int newX, int newY)dg{
    cout<<"Moving the point to("<<newX<<", "<<newY<<")"<<endl;
    x = newX;
    y = newY;
}