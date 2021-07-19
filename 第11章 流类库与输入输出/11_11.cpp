#include <iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream file("integers", ios_base::in | ios_base::binary);
	if(file){
		while(file){
			streampos here = file.tellg();
			int v;
			file.read(reinterpret_cast<char*>(&v), sizeof(int));
			if(file && v == 0)
				cout << "Position" << here << "is 0" << endl;
		}
	}else{
		cout << "ERROR:Cannot open file 'payroll'." << endl;
	}
	return 0;
}