#include <iostream>
#include<string>
#include<fstream>
#include<locale>
using namespace std;

int main() {
	locale loc(".936");
	wcout.imbue(loc);
	wifstream in("article.txt");
	in.imbue(loc);
	
	wstring line;
	unsigned number = 0;
	while(getline(in, line)){
		while(getline(in, line)){
			number++;
			if(line.find_first_of(L'人')!=wstring::npos)
				wcout << number << L":" << line << endl;
		}
	}
	return 0;
}