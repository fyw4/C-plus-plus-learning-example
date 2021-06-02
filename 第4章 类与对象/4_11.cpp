#include<iostream>
using namespace std;

class Rectangle{
    public:
        Rectangle(float l, float w){
            length = l;
            width = w;
        }
        
        ~Rectangle(){

        }
        
        float getArea(){
            return length * width;
        }

        float getlength(){
            return length;
        }

        float getwidth(){
            return width;
        }

    private:
        float length;
        float width;
};

int main(){
    float length, width;
    
    cout<<"len is:";    
    cin>>length;

    cout<<"width is:";
    cin>>width;

    Rectangle r(length, width);
    cout<<"len "<<length<<" width "<<width<<" area is "<<r.getArea()<<endl;

    return 0;
}