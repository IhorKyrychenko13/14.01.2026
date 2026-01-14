#pragma once
#include <iostream>
#include <string>
using namespace std;
class Edition
{
protected:
	string title;
	string author;
	bool is_exist;
	int year;
public:
	Edition();
	Edition(string title, string author, bool is_exist, int year);
	virtual~Edition();

	void setTitle(string title);
	void setAuthor(string author);
	void setIsExist(bool is_exist);
	void setYear(int year);
	string getTitle() const;
	string getAuthor() const;
	bool getIsExist() const;
	int getYear() const;
	virtual void showInfo() const;
};

