#include<iostream>
using namespace std;

double power(double x, int n)
{
    double val = 1.0;
    int i = 0;
    for(i = 0; i < n;i++)
    {
        val = x*x;
    }

    return val;
}

int main()
{
    cout<<power(5, 2)<<endl;

    return 0;
}