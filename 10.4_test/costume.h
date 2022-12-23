#pragma once
#ifndef Stack_
#define Stack_
#include<iostream>
#include<string>
typedef customer Item;
struct  customer
{
	char FullName[30];
	double payment;
};
class Stack
{
public:
	Stack() { strcpy(c1.FullName, '\0'), c1.payment = 0.0, n = 0; };
	~Stack();
	void push_cs();
	void pop_cs();
private:
	Item c1;
	int n;
};

Stack::Stack()
{

}

Stack::~Stack()
{



}
#endif // !Stack_
