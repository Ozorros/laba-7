#pragma once 
#include <string> 
#include <iostream> 
#ifndef HUMAN_H 
#define HUMAN_H 
using namespace std;

class human
{
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	human()
	{
		surname = "NONE";
		name = "NONE";
		midname = "NONE";
		age = 0;

	}

	human(string s, string n, string m, int a)
	{
		surname = s;
		name = n;
		midname = m;
		age = a;

	}
	virtual void print()
	{
		cout « surname « " " « name « " " « midname « " " « age « endl;
	}
	~human()
	{}
};
class student : public human
{
private:
	bool on_lesson;
protected:
	student() : human()
	{
		on_lesson = 0;
	}
public:
	student(string s, string n, string m, int a, int les) : human(s, n, m, a)
	{
		on_lesson = les;
	}
	void print() override
	{
		cout « "My name is " « surname « " " « name « " " « midname « " " « age « " years old and I'm a STUDENT." « endl;

		if (on_lesson)

			cout « "I'm at the lesson." « endl;
		else
			cout « "Unfortunately, I'm not at the lesson." « endl;
	}
	~student()
	{
	}
};
class boss : public human
{
private:
	int number_of_workers;
protected:
	boss() : human()

	{
		number_of_workers = 0;
	}
public:
	boss(string s, string n, string m, int a, int num) : human(s, n, m, a)
	{
		number_of_workers = num;
	}
	void print() override
	{
		cout « "My name is " « surname « " " « name « " " « midname « " " « age « " years old and I'm a BOSS." « endl;

		cout « "There are " « number_of_workers « " workers at my offic." « endl;
	}
	~boss()
	{
	}
};
#endif
