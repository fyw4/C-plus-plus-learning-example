#include<iostream>
using namespace std;

class Point{
    public:
        Point(int xx = 0, int yy = 0){//构造函数
            x = xx;
            y = yy;
        }

        Point(Point &p);    //复制构造函数

        int getX(){
            return x;
        }

        int getY(){
            return y;
        }

    private:
        int x, y;
};

//成员函数的实现
Point::Point(Point &p){
    x = p.x;
    y = p.y;
    cout<<"Calling the copy constructor"<<endl;
}


//形参为Point类对象的函数
void fun1(Point p){
    cout<<p.getX()<<endl;
}

//返回值为Point类对象的函数
Point fun2(){
    Point a(1, 2);
    return a;
}

int main(){
    Point a(4, 5);
    Point b = a;
    cout<<b.getX()<<endl;
    fun1(b);
    b = fun2();
    cout<<b.getX()<<endl;
    
    return 0;
}
