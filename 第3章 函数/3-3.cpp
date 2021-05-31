#include <iostream>
using namespace std;

double arctan(double x){
	double sqr = x * x;
	double e = x;	//分子
	double r = 0;	//返回值
	int i = 1;		//分母
	while(e / i > 1e-15){
		double f = e / i;					//第n项绝对值
		r = (i % 4 == 1) ? r + f : r - f;	//累加值
		e = e * sqr;						//分子更新
		i += 2;								//分母更新
	}
	
	return r;
}
int main() {
	double a = 16.0 * arctan(1 / 5.0);
	double b = 4.0 * arctan(1 / 239.0);
	//注意：因为整数相除结果取整，如果参数写为1 /5 ，1 / 239，结果都是0
	cout << "PI=" << a - b << endl;
	return 0;
}