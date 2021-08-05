#include<algorithm>
#include<iterator>
#include<vector>
#include<iostream>
using namespace std;
template<class InputIterator, class OutputIterator>
void mySort(InputIterator first, InputIterator last, OutputIterator result){
	vector<typename iterator_traits<InputIterator>::value_type>s(first, last);
	sort(s.begin(), s.end());
	copy(s.begin(), s.end(), result);
}

int main(){
	double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
	mySort(a, a+5, ostream_iterator<double>(cout, " "));
	cout << endl;
	mySort(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}