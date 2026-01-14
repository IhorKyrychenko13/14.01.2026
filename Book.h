#pragma once
#include "Edition.h"
class Book : public Edition
{
protected:
	string publisher;
public:
	Book();
	Book(string title, string author, bool is_exist, int year, string publisher);
	~Book();
	void setPublisher(string publisher);
	string getPublisher() const;
	void showInfo() const override;
};

