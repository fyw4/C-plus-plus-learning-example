#include<iostream>
using namespace std;

const float PI = 3.14159;

int  main(){
    int iType;
    float radius, a, b, area;

    cout<<"图形的类型为?(1-圆形 2-长方形 3-正方形):";
    cin>>iType;
    switch(iType){
        case 1:
            cout<<"圆的半径为：";
            cin>>radius;
            area = PI * radius * radius;
            cout<<"面积为："<<area<<endl;
            break;  
        case 2:
            cout<<"矩形长为：";
            cin>>a;
            cin>>b;
            area = a * b;
            cout<<"面积为："<<area<<endl;     
            break;       
        case 3:
            cout<<"正方形边长为：";
            cin>>a;
            area = a * a;
            cout<<"面积为："<<area<<endl;     
            break;      
        default:
            cout<<"不是合法的输入值"<<endl;
    }

    return 0;
}