#include<iostream>

using namespace std;

class Box{
    public:
        double lenght;
        double breadth;
        double height;
};

int main(){
    Box Box1;
    Box Box2;

    double volume = 0.0;

    Box1.height = 5.0;
    Box1.lenght = 6.0;
    Box1.breadth = 7.0;

    Box2.height = 10.0;
    Box2.lenght = 6.0;
    Box2.breadth = 7.0;

    volume = Box1.height * Box1.lenght * Box1.breadth;
    cout<<"Box1 体积:"<<volume<<endl;

    volume = Box2.height * Box2.lenght * Box2.breadth;
    cout<<"Box2 体积:"<<volume<<endl;

    return 0;
}