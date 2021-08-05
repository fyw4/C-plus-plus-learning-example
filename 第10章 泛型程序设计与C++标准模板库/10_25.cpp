#include<iterator>
#include<algorithm>
#include<functional>
#include<iostream>
using namespace std;
template<class T>
class IncrementIterator
	:public iterator<input_iterator_tag, T, ptrdiff_t, const T*, const T&>{
private:
	T value;
public:
	typedef IncrementIterator<T>Self;
	IncrementIterator(const T& value = T()):value(value){}
	bool operator == (const Self &rhs)const{return value == rhs.value;}
	bool operator != (const Self &rhs)const{return value != rhs.value;}
	Self &operator++(){value++;return *this;}
	Self operator++(int){
		Self tmp = * this;value++;
		return tmp;
	}
	
	const T &operator*() const{return value;}
	const T *operator->() const{return &value;}
};

int main(){
	copy(IncrementIterator<int>(), IncrementIterator<int>(10), ostream_iterator<int>(cout, " "));
	cout << endl;
	int s[] = {5, 8, 7, 4, 2, 6, 10, 3};ac
	transform(s, s + sizeof(s)/sizeof(int), IncrementIterator<int>(), ostream_iterator<int>(cout, " "), plus<int>());
	
	cout << endl;
	
	return 0;
}