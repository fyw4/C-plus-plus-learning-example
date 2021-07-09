#ifndef __DATE_H__
#define __DATE_H__

class Date{
private:
	int year;
	int month;
	int day;
	int totalDays;
public:
	Date(int year, int month, int day);
	int getYear() const{return year;}
	int getMonth() const{return month;}
	int getDay() const{return day;}
	int getMaxDay() const;//获得当月有多少天
	bool isLeapYear() const{
		return year%4 == 0&& year%100 != 0 || year%400 == 0;
	}
	
	void show() const;
	//计算两个日期之间差多少天
	int operator-(const Date &date) const{
		return totalDays - date.totalDays;
	}
};
#endif