#include<iostream>
using namespace std;

int i = 0;

namespace Ns{
    int j = 0;
}

int main(){
    i = 5;
    Ns::j = 6;
    using namespace Ns;
    int i = 0;
    i = 7;

    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;
    cout<<"i="<<i<<endl;

    return 0;
}
