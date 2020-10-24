#include<iostream>
using namespace std;

const float PI = 3.1415926;
const float FENCE_PRICE = 35;       //栅栏价格
const float CONCRETE_PRICE = 20;    //过道水泥价格

class Circle{
    public:
        Circle(float r);
       
        Circle(){
            radius = 0;
        }

        float circumference();  //计算圆周长
        float area();           //计算圆面积
        
        ~Circle(){};
    private:
        float radius;           //圆半径   
};

Circle::Circle(float r){
        radius = r;
}

float Circle::circumference(){
    return 2 * PI * radius;
}

float Circle::area(){
    return PI * radius *radius;
}

int main(){
    float radius;
    
    cout<<"Enter the radius of the pool:";
    cin>>radius;
    
    Circle pool(radius);
    Circle poolRim(radius + 3);

    //计算栅栏造价并输出
    float fenceCost = poolRim.circumference() * FENCE_PRICE;
    cout<<"Fencing Cost is $"<<fenceCost<<endl;

    //计算过道造价并输出
    float  concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
    cout<<"Concrete Cost is $"<<concreteCost<<endl;

    return 0;
}