#include "Edition.h"

Edition::Edition()
{
    title = "underfined";
    author = "underfined";
    is_exist = false;
    year = 0;
}

Edition::Edition(string title, string author, bool is_exist, int year)
{
    this->title = title;
    this->author = author;
    this->is_exist = is_exist;
    this->year = year;
}

Edition::~Edition()
{
}

void Edition::setTitle(string title)
{
    this->title = title;
}

void Edition::setAuthor(string author)
{
    this->author = author;
}

void Edition::setIsExist(bool is_exist)
{
    this->is_exist = is_exist;
}

void Edition::setYear(int year)
{
    this->year = year;
}

string Edition::getTitle() const
{
    return title;
}

string Edition::getAuthor() const
{
    return author;
}

bool Edition::getIsExist() const
{
    return is_exist;
}

int Edition::getYear() const
{
    return year;
}

void Edition::showInfo() const
{
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Is_Exist: " << is_exist << endl;
    cout << "Year: " << year << endl;
}
