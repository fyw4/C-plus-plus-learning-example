#include<iostream>
using namespace std;

class Clock{
    public:
        void setTime(int newH = 0, int newM = 0, int newS = 0);
        void showTime();
    
    private:
        int hour, minute, second;
};

//时钟类成员函数的具体实现
void Clock::setTime(int newH, int newM, int newS){
    hour = newH;
    minute = newM;
    second = newS;
}

inline void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

//主函数
int main(){
    Clock myClock;  //定义对象myClock
    
    cout<<"First time set and output:"<<endl;
    myClock.setTime();
    myClock.showTime();

    cout<<"Second time set and output:"<<endl;
    myClock.setTime(8, 30, 30);
    myClock.showTime();

    return 0;
}