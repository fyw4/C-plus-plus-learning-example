#include <iostream>
using namespace std;

void printStuff(float){
	cout << "This is the print stuff function." << endl;
}

void printMessage(float data){
	cout << "The data to be listed is " << data << endl;
}

void printFloat(float data){
	cout << "The data to be printed is " << data << endl;
}

const float PI = 3.14;
const float TWO_PI = PI * 2.0f;
int main() {
	void(*functionPointer)(float);	//函数指针
	printStuff(PI);
	functionPointer = printStuff;	//函数指针指向printStuff
	functionPointer(PI);			//函数指针调用
	functionPointer = printMessage;	//函数指针指向printMessage
	functionPointer(TWO_PI);		//函数指针调用
	functionPointer(13.0);			//函数指针调用	
	functionPointer = printFloat;	//函数指针指向printFloat
	functionPointer(PI);			//函数指针调用
	return 0;
}