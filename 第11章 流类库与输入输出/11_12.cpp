#include <iostream>
#include<sstream>
#include<string>
using namespace std;

template<class T>
inline T fromString(const string &str){
	istringstream is(str);
	T v;
	is >> v;
	return v;
}
int main() {
	int v1 = fromString<int>("5");
	cout << v1 << endl;
	double v2 = fromString<double>("1.2");
	cout << v2 << endl;
	return 0;
}