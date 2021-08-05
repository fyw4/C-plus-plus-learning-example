#ifndef __ACCOUNT_H_
#define __ACCOUNT_H_
#include"date.h"
#include"accumulator.h"
#include<string>
#include<map>
class Account;
class AccountRecord{
private:
	Date date;
	const Account *account;
	double amount;
	double balance;
	std::string desc;
public:
	AccountRecord(const Date &date, const Account *account, double amount, double balance, const std::string& desc);
	void show() const;
};

typedef std::multimap<Date, AccountRecord>RecordMap;
class Account{
private:
	std::string id;
	double balance;
	static double total;
	static RecordMap recordMap;
protected:
	Account(const Date &date, const std::string &id);
	void record(const Date &date, double amount, const std::string &desc);
	void error(const std::string &msg) const;
public:
	const std::string &getId() const {return id;}
	double getBalance() const {return balance;}
	static double getTotal(){return total;}
	virtual void deposit(const Date &date, double amount, const std::string &desc) = 0;
	virtual void withdraw(const Date &date, double amount, const std::string &desc) = 0;
	virtual void settle(const Date &date) = 0;
	virtual void show() const;
	static void query(const Date &begin, const Date & end);
};

class SavingsAccount:public Account{	//储蓄账户类
private:
	Accumulator acc;				//辅助计算利息累加器
	double rate;					//存款年利率
public:
	//构造函数
	SavingsAccount(const Date &date, const std::string &id, double rate);
	double getRate() const {return rate;}
	//存入现金
	void deposit(const Date &date, double amount, const std::string &desc);
	//取出现金
	void withdraw(const Date &date, double amount, const std::string &desc);
	void settle(const Date &date);//计算利息，每年1月1日调用一次该函数
};
class CreditAccount:public Account{//信用账户类
private:
	Accumulator acc;				//辅助计算利息的累加器
	double credit;					//信用额度
	double rate;					//欠款的日利率
	double fee;						//信用卡年费
	double getDebt() const{			//获得欠款额
		double balance = getBalance();
		return(balance < 0 ? balance : 0);
	}
public:
	//构造函数	
	CreditAccount(const Date &date, const std::string &id, double credit, double rate, double fee);
	double getCredit() const{return credit;}
	double getRate() const{return rate;}
	double getFee() const{return fee;}
	double getAvailableCredit() const{	//获得可用信用额
		if(getBalance() < 0)
			return credit + getBalance();
		else	
			return credit;
	}
	//存入现金	
	void deposit(const Date &date, double amount, const std::string &desc);
	//取出现金	
	void withdraw(const Date &date, double amount, const std::string &desc);
	void settle(const Date &date);	//结算利息和年费，每月1日调用一次该函数
	void show() const;
};
#endif